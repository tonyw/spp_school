#ifndef PROCESSOR_H_
#define PROCESSOR_H_
#include <string>
#include <iostream>

namespace meituan {
    namespace afo {
        class Processor {
            public:
                Processor();
                Processor(std::string& name);
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

#endif //PROCESSOR_H_
