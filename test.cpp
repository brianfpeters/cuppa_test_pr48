#include <iostream>

#include "version.hpp"

int main() {
    std::cout << "Hello, world!" << std::endl;
    std::cout << build::identity::report() << std::endl;
}
