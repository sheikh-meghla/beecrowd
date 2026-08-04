#include <bits/stdc++.h>
using namespace std;

long long MOD = 1000000009LL;
int MAXN = 100000;

long long modpow(long long a, long long e) {
    long long res = 1;
    while (e > 0) {
        if (e & 1) res = res * a % MOD;
        a = a * a % MOD;
        e >>= 1;
    }
    return res;
}

int main() {

    vector<long long> fact(MAXN + 1);
    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++)
    {
        fact[i] = fact[i - 1] * i % MOD;
    }

    long long inv6 = modpow(6, MOD - 2);

    int N;
    while (cin >> N && N) {
        cout << fact[N] * inv6 % MOD << '\n';
    }

    return 0;
}