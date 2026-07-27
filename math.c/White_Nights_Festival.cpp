#include <bits/stdc++.h>
using namespace std;

int main() {

    int MOD = 1000;
    int PERIOD = 1500;
    int fib[1500];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < PERIOD; i++)
        fib[i] = (fib[i - 1] + fib[i - 2]) % MOD;

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = 0;
        for (char c : s)
            n = (n * 2 + (c - '0')) % PERIOD;

        cout << setw(3) << setfill('0') << fib[n] << "\n";
    }

    return 0;
}