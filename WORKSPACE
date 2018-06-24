workspace(name = "my_cpp_playground")

# load("//third_party:repo.bzl", "tensorflow_http_archive")

# # TensorFlow depends on "io_bazel_rules_closure" so we need this here.
# # Needs to be kept in sync with the same target in TensorFlow's WORKSPACE file.
# http_archive(
#     name = "io_bazel_rules_closure",
#     sha256 = "a38539c5b5c358548e75b44141b4ab637bba7c4dc02b46b1f62a96d6433f56ae",
#     strip_prefix = "rules_closure-dbb96841cc0a5fb2664c37822803b06dab20c7d1",
#     urls = [
#         "https://mirror.bazel.build/github.com/bazelbuild/rules_closure/archive/dbb96841cc0a5fb2664c37822803b06dab20c7d1.tar.gz",
#         "https://github.com/bazelbuild/rules_closure/archive/dbb96841cc0a5fb2664c37822803b06dab20c7d1.tar.gz",  # 2018-04-13
#     ],
# )

# tensorflow_http_archive(
#     name = "org_tensorflow",
#     sha256 = "",
#     git_commit = "285c6a0fa1d5a3d2a96507ac9f707ce5c0e3ac1f",
# )

# load('@org_tensorflow//tensorflow:workspace.bzl', 'tf_workspace')

http_archive(
    name = "com_google_googletest",
    urls = [
        "https://mirror.bazel.build/github.com/google/googletest/archive/9816b96a6ddc0430671693df90192bbee57108b6.zip",
        "https://github.com/google/googletest/archive/9816b96a6ddc0430671693df90192bbee57108b6.zip",
    ],
    sha256 = "9cbca84c4256bed17df2c8f4d00c912c19d247c11c9ba6647cd6dd5b5c996b8d",
    strip_prefix = "googletest-9816b96a6ddc0430671693df90192bbee57108b6",
)

http_archive(
    name = "com_github_gflags_gflags",
    urls = [
        "https://mirror.bazel.build/github.com/gflags/gflags/archive/f8a0efe03aa69b3336d8e228b37d4ccb17324b88.tar.gz",
        "https://github.com/gflags/gflags/archive/f8a0efe03aa69b3336d8e228b37d4ccb17324b88.tar.gz",
    ],
    sha256 = "4d222fab8f1ede4709cdff417d15a1336f862d7334a81abf76d09c15ecf9acd1",
    strip_prefix = "gflags-f8a0efe03aa69b3336d8e228b37d4ccb17324b88",
)

new_http_archive(
    name = "jsoncpp_git",
    urls = [
        "https://mirror.bazel.build/github.com/open-source-parsers/jsoncpp/archive/11086dd6a7eba04289944367ca82cea71299ed70.tar.gz",
        "https://github.com/open-source-parsers/jsoncpp/archive/11086dd6a7eba04289944367ca82cea71299ed70.tar.gz",
    ],
    sha256 = "07d34db40593d257324ec5fb9debc4dc33f29f8fb44e33a2eeb35503e61d0fe2",
    strip_prefix = "jsoncpp-11086dd6a7eba04289944367ca82cea71299ed70",
    build_file = "third_party/jsoncpp.BUILD",
)