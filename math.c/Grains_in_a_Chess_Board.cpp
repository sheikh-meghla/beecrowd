#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        unsigned long long gom = 0;
        unsigned long long cur = 1;

        for (int i = 1; i <= x; i++) {
            gom += cur;
            cur *= 2;
        }

        cout << gom / 12000 << " kg\n";
    }

    return 0;
}