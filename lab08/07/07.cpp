#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int t;
    while (cin >> t) a.push_back(t);

    bool found = false;
    for (int v : a) {
        if (v < 0) {
            cout << v << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "Отрицательных чисел нет" << endl;
}
