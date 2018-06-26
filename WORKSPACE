workspace(name = "my_cpp_playground")

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
    name = "com_github_tencent_rapidjson",
      urls = [
          "https://github.com/Tencent/rapidjson/archive/v1.1.0.zip",
      ],
      sha256 = "8e00c38829d6785a2dfb951bb87c6974fa07dfe488aa5b25deec4b8bc0f6a3ab",
      strip_prefix = "rapidjson-1.1.0",
      build_file = "third_party/rapidjson.BUILD"
)