#include <iostream>
#include "processor_demo.h"

using namespace meituan::afo;
using namespace std;

ProcessorDEMO::ProcessorDEMO(){
    cout<<"ProcessorDEMO()"<<endl;
}
ProcessorDEMO::ProcessorDEMO(std::string& name):Processor(name){
    cout<<"ProcessorDEMO(string)"<<endl;
}
ProcessorDEMO::ProcessorDEMO(const char * name):Processor(name){
    cout<<"ProcessorDEMO(const char *)"<<endl;
}

void ProcessorDEMO::run0(){
    cout<<"ProcessorDEMO run0"<<endl;
}
void ProcessorDEMO::run1(){
    cout<<"ProcessorDEMO run1"<<endl;
}
void ProcessorDEMO::run2(){
    cout<<"ProcessorDEMO run2"<<endl;
}
ProcessorDEMO::~ProcessorDEMO(){
    cout<<"~ProcessorDEMO()---->"<< getName() <<endl;
}