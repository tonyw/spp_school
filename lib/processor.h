#ifndef PROCESSOR_H_
#define PROCESSOR_H_
#include <string>
#include <iostream>

namespace meituan {
    namespace afo {
        class Processor {
            public:
                Processor(std::string& name);
                Processor(const char * name);
                void run0();
                void run1();
                void run2();
                inline std::string getName() const {
                    return name;
                }
            private:
                std::string name;
        };
    }
}

#endif //PROCESSOR_H_
