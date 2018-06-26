#include <iostream>
#include <string>
#include <memory>
#include <dlfcn.h>

#include "processor_manager.h"
#include "processor.h"
using namespace meituan::afo;
using namespace std;

typedef Processor* (*INSTANCE_FUNC)(std::string&);

void ProcessorManager::setup(std::string& jsonstr){
    cout<< "setup " <<jsonstr<< endl;    
}

void ProcessorManager::process(){
    
    INSTANCE_FUNC get_instance = NULL;

    void *handle = dlopen("./bazel-bin/lib/libprocessor_demo.so", RTLD_NOW);
    if (NULL == handle){
        cout<<"dlopen fail "<<dlerror()<<endl;
        return;
    }
    *(void **) (&get_instance) = dlsym(handle, "getProcessorInstance");
    char *errorMsg;
    if ((errorMsg = dlerror()) != NULL)  {
       cout<<errorMsg<<endl;
       return;
    }
    //pointer
    string name("aa");
    std::shared_ptr<Processor> p;
    p.reset(get_instance(name));
    p->run0();
    cout<<"finish -----invoke---------"<<endl;
}

void ProcessorManager::cleanup(){
    cout<< "cleanup" << endl;    
}

ProcessorManager::~ProcessorManager(){
    cout<< "~ProcessorManager" << endl;    
}