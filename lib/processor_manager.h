#ifndef PROCESSOR_MANAGER_H_
#define PROCESSOR_MANAGER_H_
#include <string>
#include <fstream> 
#include <vector>
#include <memory>
using namespace std;

namespace meituan {
    namespace afo {
        class Processor;
        struct ProcessorConfig {
            public:
                ProcessorConfig():name(""),ldpath(""),framework(""),type(""){};
                string name;
                string ldpath;
                string framework;
                string type;

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
                vector<ProcessorConfig> configs;
                vector<std::shared_ptr<Processor> > processors;
            
        };

        class TxtFileReader {
            public:
                inline TxtFileReader(string filePath):filePath(filePath){
                    filestream=ifstream(filePath);
                    if (!filestream.is_open()) 
                        { 
                            cout << "Open file failed"<< filePath << endl; 
                        } 
                }
                inline string readAll(){
                    string temp;
                    stringstream output;
                    while(getline(filestream,temp)){ 
                        output << temp; 
                    } 
                    return output.str();
                }
                inline ~TxtFileReader(){
                    filestream.close();
                }
            private:
                ifstream filestream;
                string filePath;

        };

    }
}

#endif //PROCESSOR_MANAGER_H_