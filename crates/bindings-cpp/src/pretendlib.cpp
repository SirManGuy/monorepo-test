#include "pretendlib.h"

namespace pretendlib {
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

std::string greet(const std::string& name) {
    return "Hello, " + name + "!";
}
}
