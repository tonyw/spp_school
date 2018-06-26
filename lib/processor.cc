#include "lib/processor.h"
#include <iostream>

using namespace meituan::afo;
using namespace std;
Processor::Processor() : name(""){
    cout<< "Processor() " <<endl;
}
Processor::Processor(std::string& n) : name(n){
    cout<< "Processor(string) " << endl;
}
Processor::Processor(const char * name) : name(name){
    cout<< "Processor(const char *) " << endl;
}
void Processor::run0(){
    std::cout<<"hello run0"<<std::endl;
}
void Processor::run1(){
    std::cout<<"hello run1"<<std::endl;
}
void Processor::run2(){
    std::cout<<"hello run2"<<std::endl;
}
Processor::~Processor(){
    cout<<"~Processor()---->"<< getName() <<endl;
}