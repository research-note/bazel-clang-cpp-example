load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "Vector",
    srcs = [],
    hdrs = [
        "Vector.h",
        "Vector.hpp",
    ],
)

cc_binary(
    name = "template-vector",
    srcs = ["main.cc"],
    deps = [
        ":Vector",
    ],
)
