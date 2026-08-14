#include <bits/stdc++.h>
using namespace std;

int main() {

    long long x, y;

    while (cin >> x >> y) {
        long long g = gcd(x, y);

        cout << 2 * (x + y) / g << '\n';
    }

    return 0;
}