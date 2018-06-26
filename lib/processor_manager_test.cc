#include "gtest/gtest.h"
#include "lib/processor_manager.h"
#include <string>
#include <glog/logging.h>
#include "gflags/gflags.h"
using namespace std;
using namespace meituan::afo;

TEST(ProcessorManagerTest,run){
    ProcessorManager processorManager;
    string filePath("./lib/test_data/test.json");
    processorManager.setupFromLocalFile(filePath);
    processorManager.process();
    processorManager.cleanup();
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    google::InitGoogleLogging("ProcessorManagerTest");
    google::ParseCommandLineFlags(&argc, &argv, true);
    return RUN_ALL_TESTS();
}