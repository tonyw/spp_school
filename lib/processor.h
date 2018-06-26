#ifndef PROCESSOR_H_
#define PROCESSOR_H_
#include <string>
#include <iostream>

namespace meituan {
    namespace afo {
        class Processor {
            public:
                Processor();
                Processor(std::string name);
                void virtual run0()=0;
                void virtual run1()=0;
                void virtual run2()=0;
                virtual ~Processor()=0;
                inline std::string getName() const {
                    return name;
                }
            private:
                std::string name;
        };
    }
}

#define REGISTER_PROCESSOR(class_name)        \
    extern "C" {                                                                      \
        meituan::afo::Processor* getProcessorInstance(std::string processor_name){    \
            return new class_name(processor_name);                                    \
        }                                                                             \
    }                                                                                 \

#endif //PROCESSOR_H_
