#include <iostream>
#include <cmath>

int main() {
    double x = 0;
    constexpr auto Pi = std::acos(0) * 2;
    static_assert(Pi > 3.14, "Проверка на этапе трансляции");
    std::cout << Pi << std::endl;
    return 0;
}
