#ifndef PROCESSOR_MANAGER_H_
#define PROCESSOR_MANAGER_H_
#include <string>
#include <vector>
#include <memory>

namespace meituan {
    namespace afo {
        class Processor;
        struct ProcessorConfig {
            public:
                ProcessorConfig():name(""),ldpath(""),framework(""),type(""){};
                std::string name;
                std::string ldpath;
                std::string framework;
                std::string type;

        };

        class ProcessorManager {
            
            public:
                void setupFromJson(std::string jsonstr);
                void setupFromLocalFile(std::string filePath);
                void process();
                void cleanup();
                ~ProcessorManager();
            private:
                void setup(std::string json);
                std::vector<ProcessorConfig> configs;
                std::vector<std::shared_ptr<Processor> > processors;
        };
    }
}

#endif //PROCESSOR_MANAGER_H_