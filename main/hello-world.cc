#include "lib/processor.h"
#include "lib/processor_manager.h"
#include <iostream>
#include <string>
#include "gflags/gflags.h"

using namespace meituan::afo;
using namespace std;
DEFINE_int32(thread_num,2,"the server thread numbers");


int main(int argc, char** argv) {
  gflags::SetUsageMessage("just my cpp playground");
  google::ParseCommandLineFlags(&argc, &argv, true);
  int32_t thread_num = FLAGS_thread_num;
  cout << "the thread number:" << thread_num << endl;
  
  ProcessorManager processorManager;
  string jsonstr("");
  processorManager.setup(jsonstr);
  processorManager.process();
  processorManager.cleanup();
  
  return 0;
}
