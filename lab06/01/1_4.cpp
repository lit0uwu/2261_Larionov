#include <iostream>
#include <cmath>

int main() {
    double x = 0;
    constexpr auto Pi = std::acos(x) * 2; 
    std::cout << Pi << std::endl;
    return 0;
}
