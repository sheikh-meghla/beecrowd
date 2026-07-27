#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    for (int t = 1; t <= t; t++) {
        int n, k;
        cin >> n >> k;

        int ans = 0;

        for (int i = 2; i <= n; i++) {
            ans = (ans + k) % i;
        }

        cout << "Case " << t << ": " << ans + 1 << "\n";
    }

    return 0;
}