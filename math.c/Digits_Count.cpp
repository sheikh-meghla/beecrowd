#include <iostream>
#include <cstring>
using namespace std;

typedef long long ll;

ll cnt[10];

void countDigits(ll n, ll sign) {
    if (n < 0) return;

    ll factor = 1;

    while (factor <= n) {
        ll lower = n % factor;
        ll cur = (n / factor) % 10;
        ll higher = n / (factor * 10);

        for (int d = 0; d <= 9; d++)
            cnt[d] += higher * factor * sign;

        for (int d = 0; d < cur; d++)
            cnt[d] += factor * sign;

        cnt[cur] += (lower + 1) * sign;

        // Remove leading zero counts
        cnt[0] -= factor * sign;

        factor *= 10;
    }

    // Count the number 0 itself
    if (sign == 1)
        cnt[0]++;
    else
        cnt[0]--;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        ll a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        if (a > b)
            swap(a, b);

        memset(cnt, 0, sizeof(cnt));

        countDigits(b, 1);
        countDigits(a - 1, -1);

        for (int i = 0; i < 10; i++) {
            if (i) cout << ' ';
            cout << cnt[i];
        }
        cout << '\n';
    }

    return 0;
}