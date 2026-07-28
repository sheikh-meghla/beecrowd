#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;

    while (cin >> n) {
        long long x = n;
        long long result = n;

        for (long long i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                result -= result / i;

                while (x % i == 0) {
                    x /= i;
                }
            }
        }

        if (x > 1) {
            result -= result / x;
        }

        cout << result / 2 << '\n';
    }

    return 0;
}