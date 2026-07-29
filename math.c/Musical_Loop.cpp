#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    while (cin >> n && n) {
        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;

        for (int i = 0; i < n; i++) {
            int left = a[(i - 1 + n) % n];
            int right = a[(i + 1) % n];

            if ((a[i] > left && a[i] > right) || (a[i] < left && a[i] < right))
            {
                ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}