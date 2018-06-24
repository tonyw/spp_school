#include "lib/processor.h"
#include <iostream>

using namespace meituan::afo;

Processor::Processor(std::string& n) : name(n){
    
}
Processor::Processor(const char * name) : name(name){
    
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
