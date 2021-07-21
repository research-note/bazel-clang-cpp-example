load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "my_vector",
    srcs = [],
    hdrs = [
        "MyVector.h",
        "MyVector.hpp"
    ],
)

cc_binary(
    name = "template-vector",
    srcs = ["main.cc"],
    deps = [
        ":my_vector",
    ],
)
