#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    int64 L, D, C;

    while (cin >> L >> D >> C) {

        int64 low = 0, high = L, ans = 0;

        while (low <= high) {
            int64 mid = (low + high) / 2;

            int64 cur = L;

            for (int i = 0; i < D && cur >= mid; i++) {
                int64 trips = (cur + C - 1) / C;
                cur -= (2 * trips - 1);
            }

            if (cur >= mid) {
            {
                ans = mid;
                low = mid + 1;
            }
            } else {
                high = mid - 1;
            }
        }

        if (ans == 0)
        {
            cout << "impossivel\n";
        }
        else
        {
            cout << ans << '\n';
        }
    }

    return 0;
}