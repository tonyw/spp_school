#include <iostream>
#include <string>
#include "gflags/gflags.h"

using namespace std;
DEFINE_int32(thread_num,2,"the server thread numbers");


int main(int argc, char** argv) {
  gflags::SetUsageMessage("just my cpp playground");
  google::ParseCommandLineFlags(&argc, &argv, true);
  int32_t thread_num = FLAGS_thread_num;
  cout << "the thread number:" << thread_num << endl;
  return 0;
}
