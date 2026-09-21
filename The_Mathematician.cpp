#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int x, y;
        char ch;

        cin >> x >> ch >> y;

        for (int i = 5; i <= 10; i++) {
            cout << x << " x " << i << " = " << x * i;

            if (x != y) {
                cout << " && ";
                cout << y << " x " << i << " = " << y * i;
            }

            cout << '\n';
        }
    }

    return 0;
}