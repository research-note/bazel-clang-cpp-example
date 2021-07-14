/*
 * Build cc_library lib file example.
 *
 * Copyright Bazel organization
 *
 */

#include "lib/hello-time.h"
#include <ctime>
#include <iostream>

void print_localtime() {
    std::time_t result = std::time(nullptr);
    std::cout << std::asctime(std::localtime(&result));
}
