#include <iostream>
#include <string>

int main() {
    std::string a(100000, 'a');
    std::string b(100000, 'b');
    for (int i = 0; i < 1000000; i++) {
        std::swap(a, b);
    }
    std::cout << a[0] << b[0];
}
