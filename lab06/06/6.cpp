#include <iostream>
#include <string>
#include <utility>
#include <chrono>

template <typename F>
double measure(F f) {
    auto t0 = std::chrono::steady_clock::now();
    f();
    auto t1 = std::chrono::steady_clock::now();
    return std::chrono::duration<double>(t1 - t0).count();
}

int main() {
    const int N = 1000000;

    {
        std::string a(100000, 'a');
        std::string b(100000, 'b');
        double t = measure([&] {
            for (int i = 0; i < N; i++) {
                std::string c(a);
                a = b;
                b = c;
            }
        });
        std::cout << "copy " << t << " " << a[0] << b[0] << std::endl;
    }

    {
        std::string a(100000, 'a');
        std::string b(100000, 'b');
        double t = measure([&] {
            for (int i = 0; i < N; i++) {
                std::swap(a, b);
            }
        });
        std::cout << "swap " << t << " " << a[0] << b[0] << std::endl;
    }

    {
        std::string a(100000, 'a');
        std::string b(100000, 'b');
        double t = measure([&] {
            for (int i = 0; i < N; i++) {
                std::string c(std::move(a));
                a = std::move(b);
                b = std::move(c);
            }
        });
        std::cout << "move " << t << " " << a[0] << b[0] << std::endl;
    }
    return 0;
}
