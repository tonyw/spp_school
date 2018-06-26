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
    sha256 = "6e16c8bc91b1310a44f3965e616383dbda48f83e8c1eaa2370a215057b00cabe",
    strip_prefix = "gflags-77592648e3f3be87d6c7123eb81cbad75f9aef5a",
    urls = [
        "https://mirror.bazel.build/github.com/gflags/gflags/archive/77592648e3f3be87d6c7123eb81cbad75f9aef5a.tar.gz",
        "https://github.com/gflags/gflags/archive/77592648e3f3be87d6c7123eb81cbad75f9aef5a.tar.gz",
    ],
)

http_archive(
    name = "com_github_google_glog",
    urls = [
        "https://mirror.bazel.build/github.com/google/glog/archive/c72907c4a813fa724430f8692706cb639acdb756.tar.gz",
        "https://github.com/google/glog/archive/c72907c4a813fa724430f8692706cb639acdb756.tar.gz",
    ],
    strip_prefix = "glog-c72907c4a813fa724430f8692706cb639acdb756",
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