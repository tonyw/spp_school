#ifndef PROCESSOR_MANAGER_H_
#define PROCESSOR_MANAGER_H_
#include <string>

namespace meituan {
    namespace afo {
        class ProcessorManager {
            public:
                void setup(std::string& jsonstr);
                void process();
                void cleanup();
        };
    }
}

#endif //PROCESSOR_MANAGER_H_