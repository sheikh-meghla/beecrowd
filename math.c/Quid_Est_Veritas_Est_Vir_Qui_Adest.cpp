#include <bits/stdc++.h>
using namespace std;

long long MOD = 1000000007;
int MAXN = 1000;

vector<long long> fact(MAXN + 1);

long long power(long long a, long long b) {
    long long res = 1;
    while (b) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {

    fact[0] = 1;
    for (int i = 1; i <= MAXN; i++)
        fact[i] = (fact[i - 1] * i) % MOD;

    string s;

    while (cin >> s) {
        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'A']++;

        long long ans = fact[s.size()];

        for (int f : freq) {
            ans = (ans * power(fact[f], MOD - 2)) % MOD;
        }

        cout << ans << '\n';
    }

    return 0;
}