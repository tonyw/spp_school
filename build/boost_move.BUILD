package(default_visibility = ["//visibility:public"])

licenses(["notice"])

cc_library(
  name = "move",
  includes = [
      "include/",
  ],
  hdrs = glob([
      "include/boost/**/*.hpp",
  ]),
  srcs = [
  ],
  deps = [
      "@com_github_boost_assert//:assert",
      "@com_github_boost_static_assert//:static_assert",
  ],
)
