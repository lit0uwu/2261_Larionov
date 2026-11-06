#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i % 3 == 0) i++;
        cout << i << " ";
    }
    cout << endl;

    {
        int __i = 0, __n = 10;
        for (const int &i = __i; i < __n; __i++) {
            // if (i % 3 == 0) i++; 
            cout << i << " ";
        }
    }
    cout << endl;
}
