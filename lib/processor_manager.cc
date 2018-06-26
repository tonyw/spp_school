#include "processor_manager.h"
#include "processor.h"
#include <iostream>
#include <string>
#include <memory>

#include "processor_demo.h"
using namespace meituan::afo;
using namespace std;

void ProcessorManager::setup(std::string& jsonstr){
    cout<< "setup " <<jsonstr<< endl;    
}

void ProcessorManager::process(){
    
    // object
    // string name("aa");
    // ProcessorDEMO demo(name);
    // demo.run0();

    // shared pointer
    // string pname("p1");
    // std::shared_ptr<Processor> p = std::make_shared<ProcessorDEMO>(pname);
    // p->run0();
    // const char * p2Name = "p2";
    // std::shared_ptr<Processor> p2 = std::make_shared<ProcessorDEMO>(p2Name);
    // p2->run0();
    // cout<<"finish -----invoke---------"<<endl;

    //pointer
    string name("aa");
    std::shared_ptr<Processor> p;
    p.reset(getProcessorDEMOInstance(name));
    p->run0();
    const char * p2Name = "p2";
    std::shared_ptr<Processor> p2;
    p2.reset(getProcessorDEMOInstance(p2Name));
    p2->run0();
    cout<<"finish -----invoke---------"<<endl;
}

void ProcessorManager::cleanup(){
    cout<< "cleanup" << endl;    
}

ProcessorManager::~ProcessorManager(){
    cout<< "~ProcessorManager" << endl;    
}