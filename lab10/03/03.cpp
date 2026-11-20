#include <iostream>

int main() {
  int a = 5, b = 2;

    int mult = a * b;
    int* ptr = &a;
    *ptr = 10;

    int bitwise = a & b;
    int* p2 = &a;
    int& ref = a;
    ref = 20;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;
}
