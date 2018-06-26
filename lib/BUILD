package(default_visibility = ["//visibility:public"])

cc_library(
    name = "processor_manager",
    srcs = ["processor.cc","processor_manager.cc","processor_demo.cc"],
    hdrs = ["processor.h","processor_manager.h","processor_demo.h"],
    deps = [
        "@jsoncpp_git//:jsoncpp",
    ]
)

# cc_library(
#     name = "processor_demo",
#     srcs = ["processor_demo.h","processor_demo.cc"],
#     deps = [
#         ":processor_manager",
#         "@jsoncpp_git//:jsoncpp",
#     ]
# )

cc_test(
    name = "processor_manager_test",
    srcs = ["processor_manager_test.cc"],
    deps = [
        "//lib:processor_manager",
        "@com_google_googletest//:gtest",
        "@com_google_googletest//:gtest_main"
    ]
)
