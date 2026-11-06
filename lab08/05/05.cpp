#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &e : v) cin >> e;

    const int last = v.back();
    for (int &e : v) e += last;

    int pos = 0, neg = 0;
    for (int e : v) {
        if (e > 0) pos++;
        else if (e < 0) neg++;
    }
    cout << pos << " " << neg << endl;
}
