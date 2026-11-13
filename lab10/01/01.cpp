#include <iostream>

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    *p = *q;
    std::cout << a << ' ' << b << ' ' << *p << ' ' << *q << std::endl;
    std::cout << p << ' ' << q << std::endl;

    int c = 10, d = 20;
    int *r = &c, *s = &d;
    r = s;
    std::cout << c << ' ' << d << ' ' << *r << ' ' << *s << std::endl;
    std::cout << r << ' ' << s << std::endl;
}
