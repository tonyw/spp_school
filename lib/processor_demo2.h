#ifndef PROCESSOR_DEMO2_H_
#define PROCESSOR_DEMO2_H_
#include <string>
#include <iostream>
#include "processor.h"


namespace meituan {
    namespace afo {

        class ProcessorDEMO2 : public Processor  {
            public:
                ProcessorDEMO2();
                ProcessorDEMO2(std::string name);
                void run0();
                void run1();
                void run2();
                ~ProcessorDEMO2();
            private:
                std::string attr;
        };
    }
}
REGISTER_PROCESSOR(meituan::afo::ProcessorDEMO2)

#endif //PROCESSOR_DEMO2_H_