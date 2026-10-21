#include <iostream>
int main() {
    int s = 0;
    for (int i = 0; i < 4; i++) {
        std::cout << i << std::endl;
        for (int i = 0; i < 3; i++) {
            s += i;
            std::cout << i << " " << s << std::endl;
        }
        s += i;
        std::cout << i << " " << s << std::endl;
    }
    std::cout << s << std::endl;
    return 0;
}
