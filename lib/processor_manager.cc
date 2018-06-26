#include <iostream>
#include <dlfcn.h>
#include <sstream>


#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

#include "processor_manager.h"
#include "processor.h"

#include <glog/logging.h>
#include <glog/stl_logging.h>

using namespace meituan::afo;
using namespace std;
using namespace rapidjson;
typedef Processor* (*INSTANCE_FUNC)(std::string);


INSTANCE_FUNC getProcessorCreator(string path){
    INSTANCE_FUNC get_instance = NULL;
    void *handle = dlopen(path.c_str(), RTLD_NOW);
    if (NULL == handle){
        LOG(INFO) <<"dlopen fail "<<dlerror();
    }
    *(void **) (&get_instance) = dlsym(handle, "getProcessorInstance");
    char *errorMsg;
    if ((errorMsg = dlerror()) != NULL)  {
       LOG(ERROR) <<errorMsg;
    }
    return get_instance;
}

vector<ProcessorConfig> processJson(string json){
    Document d;
    d.Parse(json.c_str());
    Value& ps = d["processors"];
    vector<ProcessorConfig> configs;
    if(ps.IsArray()){
        LOG(INFO)<<"processors size "<<ps.Size();
        for(size_t i=0;i<ps.Size();i++){
            Value & p = ps[i];
            ProcessorConfig config;   
            if (p.HasMember("name") && p["name"].IsString()) {
                config.name=p["name"].GetString();  
            }else{
                LOG(ERROR)<<"the processor should has name";
            }
            if (p.HasMember("ldpath") && p["ldpath"].IsString()) {
                config.ldpath=p["ldpath"].GetString();
            }else{
                LOG(ERROR)<<"the processor should has ldpath";
            }
            if (p.HasMember("framework")) {  
                config.framework = p["framework"].GetString();  
            }  
            if (p.HasMember("type")) {  
                config.type = p["type"].GetString();  
            }
            if(config.name.size()>0){
                configs.push_back(config);
            }
        }
    }else{
        LOG(ERROR)<<"why not array";
    }
    return configs;
}

void ProcessorManager::setup(std::string jsonstr){
    configs=processJson(jsonstr);
    for(size_t i=0;i<configs.size();i++){
        std::shared_ptr<Processor> p;
        p.reset(getProcessorCreator(configs[i].ldpath)(configs[i].name));
        processors.push_back(p);
    }    
}

void ProcessorManager::setupFromJson(std::string jsonstr){
    LOG(INFO)<< "setupFromJson " <<jsonstr;
    setup(jsonstr); 
}
void ProcessorManager::setupFromLocalFile(std::string fileName){
    LOG(INFO)<< "setupFromLocalFile " <<fileName;
    TxtFileReader reader(fileName);
    string jsonstr=reader.readAll();
    setup(jsonstr); 
}

void ProcessorManager::process(){
    
    for(size_t i=0;i<processors.size();i++){
        processors[i]->run0();
    }
    for(size_t i=0;i<processors.size();i++){
        processors[i]->run1();
    }
    for(size_t i=0;i<processors.size();i++){
        processors[i]->run2();
    }
    LOG(INFO)<<"finish -----invoke---------";
}

void ProcessorManager::cleanup(){
    LOG(INFO)<< "cleanup";    
}

ProcessorManager::~ProcessorManager(){
    LOG(INFO)<< "~ProcessorManager";    
}