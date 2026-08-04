#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

pair<int64, int64> fib(int64 n, int64 mod) {
    if (n == 0) return {0, 1};

    auto p = fib(n >> 1, mod);

    int64 a = p.first;
    int64 b = p.second;

    int64 c = (a * ((2 * b % mod - a + mod) % mod)) % mod;
    int64 d = (a * a % mod + b * b % mod) % mod;

    if (n & 1)
    {
        return {d, (c + d) % mod};
    }
    else
    {
        return {c, d};
    }
}

int main() {


    long long N;
    int M;

    while (cin >> N >> M) {

        int period = 0;
        int prev = 0, cur = 1;

        for (int i = 1;; i++) {
            int nxt = (prev + cur) % M;
            prev = cur;
            cur = nxt;

            if (prev == 0 && cur == 1) {
                period = i;
                break;
            }
        }

        long long x = fib(N, period).first;

        cout << fib(x, M).first << '\n';
    }

    return 0;
}