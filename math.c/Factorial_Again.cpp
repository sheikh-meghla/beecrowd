#include <bits/stdc++.h>
using namespace std;

int main() {


    int fact[6];
    fact[0] = 1;
    for (int i = 1; i <= 5; i++)
    {
        fact[i] = fact[i - 1] * i;
    }

    string s;

    while (cin >> s && s != "0") {
        int ans = 0;
        int pos = 1;

        for (int i = s.size() - 1; i >= 0; i--) {
            ans += (s[i] - '0') * fact[pos];
            pos++;
        }

        cout << ans << '\n';
    }

    return 0;
}