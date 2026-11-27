#include <iostream>

int g1[128], g2[128];

void show(const char* name, int* a) {
    std::cout << name << ": " << &a[0] << " " << &a[127] << std::endl;
}

int main() {
    static int s1[128], s2[128];
    int l1[128], l2[128];
    int *h1 = new int[128], *h2 = new int[128];

    show("global 1", g1);
    show("global 2", g2);
    show("static 1", s1);
    show("static 2", s2);
    show("stack 1", l1);
    show("stack 2", l2);
    show("heap 1", h1);
    show("heap 2", h2);

    delete[] h1;
    delete[] h2;
    return 0;
}
