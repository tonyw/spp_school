#include <iostream>
#include "processor_demo2.h"

using namespace meituan::afo;
using namespace std;

ProcessorDEMO2::ProcessorDEMO2(){
    cout<<"ProcessorDEMO2()"<<endl;
}
ProcessorDEMO2::ProcessorDEMO2(std::string name):Processor(name){
    cout<<"ProcessorDEMO2(string)"<<endl;
}

void ProcessorDEMO2::run0(){
    cout<<"ProcessorDEMO2 run0"<<endl;
}
void ProcessorDEMO2::run1(){
    cout<<"ProcessorDEMO2 run1"<<endl;
}
void ProcessorDEMO2::run2(){
    cout<<"ProcessorDEMO2 run2"<<endl;
}
ProcessorDEMO2::~ProcessorDEMO2(){
    cout<<"~ProcessorDEMO2()---->"<< getName() <<endl;
}