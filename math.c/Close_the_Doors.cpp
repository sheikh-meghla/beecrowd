#include <iostream>

using namespace std;

int main() {

    long long n;
    while (cin >> n && n != 0) {
        bool first = true;
        for (long long i = 1; i * i <= n; ++i) {
            if (!first) {
                cout << " ";
            }
            cout << i * i;
            first = false;
        }
        cout << "\n";
    }

    return 0;
}