#ifndef PROCESSOR_DEMO_H_
#define PROCESSOR_DEMO_H_
#include <string>
#include <iostream>
#include "processor.h"


namespace meituan {
    namespace afo {

        class ProcessorDEMO : public Processor  {
            public:
                ProcessorDEMO();
                ProcessorDEMO(std::string name);
                void run0();
                void run1();
                void run2();
                ~ProcessorDEMO();
            private:
                std::string attr;
        };
    }
}
REGISTER_PROCESSOR(meituan::afo::ProcessorDEMO)

#endif //PROCESSOR_DEMO_H_