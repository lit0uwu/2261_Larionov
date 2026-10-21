#include <iostream>

namespace First {
    int value = 10;

    int calculate(int a) {
        return a + value;
    }
}

namespace Second {
    int value = 20;

    int calculate(int a) {
        return a * value;
    }
}

int main() {
    std::cout << First::value << std::endl;
    std::cout << Second::value << std::endl;

    std::cout << First::calculate(5) << std::endl;
    std::cout << Second::calculate(5) << std::endl;

    return 0;
}
