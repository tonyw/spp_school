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
    name = "jsoncpp_git",
    urls = [
        "https://mirror.bazel.build/github.com/open-source-parsers/jsoncpp/archive/11086dd6a7eba04289944367ca82cea71299ed70.tar.gz",
        "https://github.com/open-source-parsers/jsoncpp/archive/11086dd6a7eba04289944367ca82cea71299ed70.tar.gz",
    ],
    sha256 = "07d34db40593d257324ec5fb9debc4dc33f29f8fb44e33a2eeb35503e61d0fe2",
    strip_prefix = "jsoncpp-11086dd6a7eba04289944367ca82cea71299ed70",
    build_file = "build/jsoncpp.BUILD",
  )

new_git_repository(
    name = "com_github_boost_array",
    build_file = "build/boost_array.BUILD",
    commit = "cef221d8b4fe89325c4d0678519b0d59d2a82075",
    remote = "https://github.com/boostorg/array.git",
)

new_git_repository(
    name = "com_github_boost_asio",
    build_file = "build/boost_asio.BUILD",
    commit = "b002097359f246b7b1478775251dfb153ab3ff4b",
    remote = "https://github.com/boostorg/asio.git",
)

new_git_repository(
    name = "com_github_boost_assert",
    build_file = "build/boost_assert.BUILD",
    commit = "cf19f2469ace0222e056ae7e7f4a1c4c27caa7c8",
    remote = "https://github.com/boostorg/assert.git",
)

new_git_repository(
    name = "com_github_boost_algorithm",
    build_file = "build/boost_algorithm.BUILD",
    commit = "554db2f07dcbf65c760d75b559ff2011edf66809",
    remote = "https://github.com/boostorg/algorithm.git",
)

new_git_repository(
    name = "com_github_boost_bind",
    build_file = "build/boost_bind.BUILD",
    commit = "d6abae3bd6137c3491d779130b09618f14b23e33",
    remote = "https://github.com/boostorg/bind.git",
)

new_git_repository(
    name = "com_github_boost_concept_check",
    build_file = "build/boost_concept_check.BUILD",
    commit = "df4ced9aae94a3ad56cd6d0047e6bb758edc23eb",
    remote = "https://github.com/boostorg/concept_check.git",
)

new_git_repository(
    name = "com_github_boost_config",
    build_file = "build/boost_config.BUILD",
    commit = "0cdf4a5da8f2569061721abfeb3a43456cb060dc",
    remote = "https://github.com/boostorg/config.git",
)

new_git_repository(
    name = "com_github_boost_container",
    build_file = "build/boost_container.BUILD",
    commit = "407aabd77bd5e1080394e5519b1061f27f2b7130",
    remote = "https://github.com/boostorg/container.git",
)

new_git_repository(
    name = "com_github_boost_core",
    build_file = "build/boost_core.BUILD",
    commit = "2738af9b520683dfeab73df67d1ec29818a0add7",
    remote = "https://github.com/boostorg/core.git",
)

new_git_repository(
    name = "com_github_boost_crc",
    build_file = "build/boost_crc.BUILD",
    commit = "0f271ab38f7fd1b6bf1dcb8b586a6140de9da92b",
    remote = "https://github.com/boostorg/crc.git",
)

new_git_repository(
    name = "com_github_boost_date_time",
    build_file = "build/boost_date_time.BUILD",
    commit = "d9b355d2c2c605a37d5de0c31f87a3ad798286c1",
    remote = "https://github.com/boostorg/date_time.git",
)

new_git_repository(
    name = "com_github_boost_detail",
    build_file = "build/boost_detail.BUILD",
    commit = "15d8f9a59c25f9e2425f5feda5ff9ec3fd9eb72c",
    remote = "https://github.com/boostorg/detail.git",
)

new_git_repository(
    name = "com_github_boost_filesystem",
    build_file = "build/boost_filesystem.BUILD",
    commit = "07619fb37007f45b54bc71877e724c8f4b014c9f",
    remote = "https://github.com/boostorg/filesystem.git",
)

new_git_repository(
    name = "com_github_boost_format",
    build_file = "build/boost_format.BUILD",
    commit = "c01cb4154ba3d3bc89466a759ef49717b7c0b93c",
    remote = "https://github.com/boostorg/format.git",
)

new_git_repository(
    name = "com_github_boost_function",
    build_file = "build/boost_function.BUILD",
    commit = "9c1285514f56b858521e206909ded3165c1007b7",
    remote = "https://github.com/boostorg/function.git",
)

new_git_repository(
    name = "com_github_boost_functional",
    build_file = "build/boost_functional.BUILD",
    commit = "5d83851b5c15086af3ca8a81d21764aa7a1d09e3",
    remote = "https://github.com/boostorg/functional.git",
)

new_git_repository(
    name = "com_github_boost_fusion",
    build_file = "build/boost_fusion.BUILD",
    commit = "b6e52854309dc0f1b2a8e3cbb4440b35a9e5176a",
    remote = "https://github.com/boostorg/fusion.git",
)

new_git_repository(
    name = "com_github_boost_hana",
    build_file = "build/boost_hana.BUILD",
    commit = "e53c547207c4364f051d5ca7c244ffa03267af69",
    remote = "https://github.com/boostorg/hana.git",
)

new_git_repository(
    name = "com_github_boost_integer",
    build_file = "build/boost_integer.BUILD",
    commit = "919c5277c1e4d6ea9811763cf7b240bd75c5dbba",
    remote = "https://github.com/boostorg/integer.git",
)

new_git_repository(
    name = "com_github_boost_io",
    build_file = "build/boost_io.BUILD",
    commit = "00ef24c8437b66ac464ea5664e1524c0de697f98",
    remote = "https://github.com/boostorg/io.git",
)

new_git_repository(
    name = "com_github_boost_interprocess",
    build_file = "build/boost_interprocess.BUILD",
    commit = "be3a7e272b50675bbf90f2eaff1816d0051ec2a5",
    remote = "https://github.com/boostorg/interprocess.git",
)

new_git_repository(
    name = "com_github_boost_iterator",
    build_file = "build/boost_iterator.BUILD",
    commit = "8b5e92a0c4417bb0dfdaa1594e47fcded64f988c",
    remote = "https://github.com/boostorg/iterator.git",
)

new_git_repository(
    name = "com_github_boost_intrusive",
    build_file = "build/boost_intrusive.BUILD",
    commit = "7f5caca12eac63ce3381493f3f8a861c35b03076",
    remote = "https://github.com/boostorg/intrusive.git",
)

new_git_repository(
    name = "com_github_boost_lexical_cast",
    build_file = "build/boost_lexical_cast.BUILD",
    commit = "398b4510366c27007d478a1d8b0732ba5ef7feda",
    remote = "https://github.com/boostorg/lexical_cast.git",
)

new_git_repository(
    name = "com_github_boost_math",
    build_file = "build/boost_math.BUILD",
    commit = "06292b087370b907db26fcaecb074cb999aa7ee0",
    remote = "https://github.com/boostorg/math.git",
)

new_git_repository(
    name = "com_github_boost_move",
    build_file = "build/boost_move.BUILD",
    commit = "6cb4f456d1cac72c674160c689913ac3e12e54d0",
    remote = "https://github.com/boostorg/move.git",
)

new_git_repository(
    name = "com_github_boost_mpl",
    build_file = "build/boost_mpl.BUILD",
    commit = "f311a495ed58bf51e6f11f3e900570a8d2bfc8cc",
    remote = "https://github.com/boostorg/mpl.git",
)

new_git_repository(
    name = "com_github_boost_numeric_conversion",
    build_file = "build/boost_numeric_conversion.BUILD",
    commit = "7f3a74cb7457eef0c5e531b547ceda11bf640e0d",
    remote = "https://github.com/boostorg/numeric_conversion.git",
)

new_git_repository(
    name = "com_github_boost_optional",
    build_file = "build/boost_optional.BUILD",
    commit = "82acdb9d172e160bae2a5a8a923134565b7d8a4e",
    remote = "https://github.com/boostorg/optional.git",
)

new_git_repository(
    name = "com_github_boost_parameter",
    build_file = "build/boost_parameter.BUILD",
    commit = "6f747e9869a90746d1fa275a234f4b6b1c864d11",
    remote = "https://github.com/boostorg/parameter.git",
)

new_git_repository(
    name = "com_github_boost_pool",
    build_file = "build/boost_pool.BUILD",
    commit = "",
    remote = "https://github.com/boostorg/pool.git",
)

new_git_repository(
    name = "com_github_boost_predef",
    build_file = "build/boost_predef.BUILD",
    commit = "7c99dfbbd54c775084318cc387adb31ad8da4f05",
    remote = "https://github.com/boostorg/predef.git",
)

new_git_repository(
    name = "com_github_boost_preprocessor",
    build_file = "build/boost_preprocessor.BUILD",
    commit = "dfc1c46ecedef21274eb142e267e91400aa33ec8",
    remote = "https://github.com/boostorg/preprocessor.git",
)

new_git_repository(
    name = "com_github_boost_process",
    build_file = "build/boost_process.BUILD",
    commit = "054d7980abec570ca21038ed61e759acc70bd043",
    remote = "https://github.com/boostorg/process.git",
)

new_git_repository(
    name = "com_github_boost_random",
    build_file = "build/boost_random.BUILD",
    commit = "ab411acba33d59c0b1a2a8c8bc79f9b93e6e7c45",
    remote = "https://github.com/boostorg/random.git",
)

new_git_repository(
    name = "com_github_boost_range",
    build_file = "build/boost_range.BUILD",
    commit = "8b98b696ff7e1cbda27477294a0b17742266405e",
    remote = "https://github.com/boostorg/range.git",
)

new_git_repository(
    name = "com_github_boost_smart_ptr",
    build_file = "build/boost_smart_ptr.BUILD",
    commit = "a054a570c11bd1ac9e89b849cd7636f4b3341e4c",
    remote = "https://github.com/boostorg/smart_ptr.git",
)

new_git_repository(
    name = "com_github_boost_static_assert",
    build_file = "build/boost_static_assert.BUILD",
    commit = "62c6cdcd46611618aacdc533c4b0c0265d011503",
    remote = "https://github.com/boostorg/static_assert.git",
)

new_git_repository(
    name = "com_github_boost_system",
    build_file = "build/boost_system.BUILD",
    commit = "855fc9601066eb05addea8ce66a3fc7b52b08427",
    remote = "https://github.com/boostorg/system.git",
)

new_git_repository(
    name = "com_github_boost_throw_exception",
    build_file = "build/boost_throw_exception.BUILD",
    commit = "56d65d5f625ed118f6052cc8f924f8ec21913089",
    remote = "https://github.com/boostorg/throw_exception.git",
)

new_git_repository(
    name = "com_github_boost_tokenizer",
    build_file = "build/boost_tokenizer.BUILD",
    commit = "48965b4d516fc34bda409ff8dd0aababd327aac8",
    remote = "https://github.com/boostorg/tokenizer.git",
)

new_git_repository(
    name = "com_github_boost_type_index",
    build_file = "build/boost_type_index.BUILD",
    commit = "1a7226bc0f4d4982788cdf5860757ee6353295e2",
    remote = "https://github.com/boostorg/type_index.git",
)

new_git_repository(
    name = "com_github_boost_type_traits",
    build_file = "build/boost_type_traits.BUILD",
    commit = "b23f18cac2f45949a3b3acf5870a79765f4dbe48",
    remote = "https://github.com/boostorg/type_traits.git",
)

new_git_repository(
    name = "com_github_boost_utility",
    build_file = "build/boost_utility.BUILD",
    commit = "51ba9f1b4568dd0c22bef3c9820da48f9d6a3731",
    remote = "https://github.com/boostorg/utility.git",
)

new_git_repository(
    name = "com_github_boost_uuid",
    build_file = "build/boost_uuid.BUILD",
    commit = "987b87f41eec217f30c478f047e468d06dd444b5",
    remote = "https://github.com/boostorg/uuid.git",
)

new_git_repository(
    name = "com_github_boost_variant",
    build_file = "build/boost_variant.BUILD",
    commit = "ea73f3fb81365ab3df20fa6264b1551cbce65d91",
    remote = "https://github.com/boostorg/variant.git",
)

new_git_repository(
    name = "com_github_boost_winapi",
    build_file = "build/boost_winapi.BUILD",
    commit = "a9abc7668ab299392b9e458e2e99328b2151a899",
    remote = "https://github.com/boostorg/winapi.git",
)