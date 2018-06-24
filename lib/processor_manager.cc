#include "processor_manager.h"
#include "processor.h"
#include <iostream>
#include <string>

using namespace meituan::afo;
using namespace std;

void ProcessorManager::setup(std::string& jsonstr){
    cout<< "setup " <<jsonstr<< endl;    
}

void ProcessorManager::process(){
    string pname("p1");
    Processor p(pname);
    p.run0();
    const char * p2Name = "p2";
    Processor p2(p2Name);
    p2.run0();
}

void ProcessorManager::cleanup(){
    cout<< "cleanup" << endl;    
}