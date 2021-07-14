/*
 * Build executable object file + cc_library example.
 *
 * Copyright Bazel organization
 *
 */

#ifndef CPP_TUTORIAL_STAGE2_MAIN_HELLO_GREET_H_
#define CPP_TUTORIAL_STAGE2_MAIN_HELLO_GREET_H_

#include <string>

std::string get_greet(const std::string &thing);

#endif  // CPP_TUTORIAL_STAGE2_MAIN_HELLO_GREET_H_
