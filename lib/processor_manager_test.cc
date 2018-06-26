#include "gtest/gtest.h"
#include "lib/processor_manager.h"
#include <string>
using namespace std;
using namespace meituan::afo;

TEST(ProcessorManagerTest,run){
    ProcessorManager processorManager;
    string filePath("./lib/test_data/test.json");
    processorManager.setupFromLocalFile(filePath);
    processorManager.process();
    processorManager.cleanup();
}