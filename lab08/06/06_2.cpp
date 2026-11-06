#include <iostream>
using namespace std;

int main() {
    int n = 5, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) { 
        if (i == 2) n = 3;
        cnt1++;
    }

    n = 5;
    {
        int __i = 0, __n = n;
        for (const int &i = __i; i < __n; __i++) {
            if (i == 2) n = 3;
            cnt2++;
        }
    }
    cout << cnt1 << " " << cnt2 << endl;
}
