#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, m;

    while (cin >> n >> m) {
        if (n == 0 && m == 0)
        {
            break;
        }

        vector<vector<long long>> a(n, vector<long long>(m));
        long long total = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
            total += a[i][m - 1];
        }

        for (int i = 0; i < n; i++) {
            long long x = a[i][m - 1];

            if (x == 0) {
            {
                cout << "0 / 1\n";
            }
            } else {
                long long g = gcd(x, total);

                cout << x / g << " / " << total / g << '\n';
            }
        }
    }

    return 0;
}