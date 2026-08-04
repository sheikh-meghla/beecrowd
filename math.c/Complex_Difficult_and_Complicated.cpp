#include <bits/stdc++.h>
using namespace std;

int main() {
    long double LIMIT = (1LL << 30);

    int T;
    cin >> T;

    while (T--) {
        long long a, b;
        cin >> a >> b;

        int n = -1;

        if (b == 0)
        {
            n = 1;
        }
        else if (a == 0)
        {
            n = 2;
        }
        else if (abs(a) == abs(b))
        {
            n = 4;
        }

        if (n == -1) {
            cout << "TOO COMPLICATED\n";
            continue;
        }

        long double r2 = (long double)a * a + (long double)b * b;
        long double value = pow(r2, (long double)n / 2.0);

        if (value > LIMIT + 1e-9)
        {
            cout << "TOO COMPLICATED\n";
        }
        else
        {
            cout << n << '\n';
        }
    }

    return 0;
}