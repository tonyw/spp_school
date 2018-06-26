#include <iostream>
#include <dlfcn.h>
#include <sstream>


#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

#include "processor_manager.h"
#include "processor.h"
using namespace meituan::afo;
using namespace std;
using namespace rapidjson;
typedef Processor* (*INSTANCE_FUNC)(std::string);


INSTANCE_FUNC getProcessorCreator(string path){
    INSTANCE_FUNC get_instance = NULL;
    void *handle = dlopen(path.c_str(), RTLD_NOW);
    if (NULL == handle){
        cout<<"dlopen fail "<<dlerror()<<endl;
    }
    *(void **) (&get_instance) = dlsym(handle, "getProcessorInstance");
    char *errorMsg;
    if ((errorMsg = dlerror()) != NULL)  {
       cout<<errorMsg<<endl;
    }
    return get_instance;
}

vector<ProcessorConfig> processJson(string json){
    Document d;
    d.Parse(json.c_str());
    Value& ps = d["processors"];
    vector<ProcessorConfig> configs;
    if(ps.IsArray()){
        cout<<"processors size "<<ps.Size()<<endl;
        for(size_t i=0;i<ps.Size();i++){
            Value & p = ps[i];
            //TODO remove assert for WARN LOG
            assert(p.IsObject());
            ProcessorConfig config;   
            if (p.HasMember("name") && p["name"].IsString()) {
                config.name=p["name"].GetString();  
            }else{
                cout<<"the processor should has name"<<endl;
            }
            if (p.HasMember("ldpath") && p["ldpath"].IsString()) {
                config.ldpath=p["ldpath"].GetString();
            }else{
                cout<<"the processor should has ldpath"<<endl;
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
        cout<<"why not array"<<endl;
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
    cout<< "setupFromJson " <<jsonstr<< endl;
    setup(jsonstr); 
}
void ProcessorManager::setupFromLocalFile(std::string fileName){
    cout<< "setupFromLocalFile " <<fileName<< endl;
    TxtFileReader reader(fileName);
    string jsonstr=reader.readAll();
    setup(jsonstr); 
}

void ProcessorManager::process(){
    
    for(size_t i=0;i<processors.size();i++){
        processors[i]->run0();
    }
    cout<<"finish -----invoke---------"<<endl;
}

void ProcessorManager::cleanup(){
    cout<< "cleanup" << endl;    
}

ProcessorManager::~ProcessorManager(){
    cout<< "~ProcessorManager" << endl;    
}