#include <bits/stdc++.h>
using namespace std;

int main() {

    int prime[3502];
    int cnt = 0;

    for (int x = 2; cnt < 3501; x++) {
        bool ok = true;

        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                ok = false;
                break;
            }
        }

        if (ok)
            prime[cnt++] = x;
    }

    int n;
    while (cin >> n && n) {
        int ans = 0;

        for (int i = 2; i <= n; i++) {
            ans = (ans + prime[n - i]) % i;
        }

        cout << ans + 1 << '\n';
    }

    return 0;
}