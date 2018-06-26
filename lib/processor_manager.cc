#include <iostream>
#include <string>
#include <memory>
#include <dlfcn.h>

#include "processor_manager.h"
#include "processor.h"
using namespace meituan::afo;
using namespace std;

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

void ProcessorManager::setup(std::string jsonstr){
    cout<< "setup " <<jsonstr<< endl;    
}

void ProcessorManager::process(){
    
    //pointer
    string name("aa");
    std::shared_ptr<Processor> p;
    p.reset(getProcessorCreator("./bazel-bin/lib/libprocessor_demo1.so")(name));
    p->run0();
    std::shared_ptr<Processor> p2;
    p2.reset(getProcessorCreator("./bazel-bin/lib/libprocessor_demo2.so")(name));
    p2->run0();
    cout<<"finish -----invoke---------"<<endl;
}

void ProcessorManager::cleanup(){
    cout<< "cleanup" << endl;    
}

ProcessorManager::~ProcessorManager(){
    cout<< "~ProcessorManager" << endl;    
}