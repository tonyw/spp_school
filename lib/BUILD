package(default_visibility = ["//visibility:public"])

cc_library(
    name = "processor_manager",
    srcs = ["processor.cc","processor_manager.cc"],
    hdrs = ["processor.h","processor_manager.h"],
    deps = [
        "@com_github_tencent_rapidjson//:rapidjson",
        "@com_github_google_glog//:glog"
    ]
)

cc_library(
    name = "processor_demo1",
    srcs = ["processor_demo.h","processor_demo.cc"],
    deps = [
        ":processor_manager",
    ]
)

cc_library(
    name = "processor_demo2",
    srcs = ["processor_demo2.h","processor_demo2.cc"],
    deps = [
        ":processor_manager",
    ]
)

cc_test(
    name = "processor_manager_test",
    srcs = ["processor_manager_test.cc"],
    linkopts = ["-ldl"],
    deps = [
        "//lib:processor_manager",
        "//lib:processor_demo1",
        "//lib:processor_demo2",
        "@com_google_googletest//:gtest",
        #"@com_google_googletest//:gtest_main",
        "@com_github_gflags_gflags//:gflags",
        "@com_github_google_glog//:glog"
    ]
)
