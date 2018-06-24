#include "gtest/gtest.h"
#include "lib/processor_manager.h"
#include <string>
using namespace std;
using namespace meituan::afo;

TEST(ProcessorManagerTest,run){
    ProcessorManager processorManager;
    string jsonstr("");
    processorManager.setup(jsonstr);
    processorManager.process();
    processorManager.cleanup();
}