#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll MOD = 1300031;

int main() {

    while (true) {
        ll I, F;
        int N;
        cin >> I >> F >> N;

        if (I == 0 && F == 0 && N == 0)
        {
            break;
        }

        vector<ll> a(N);
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        ll ans = 0;

        for (int mask = 1; mask < (1 << N); mask++) {

            ll lcm = 1;
            bool ok = true;
            int bits = 0;

            for (int i = 0; i < N; i++) {
                if (mask & (1 << i)) {

                    bits++;
                    ll g = gcd(lcm, a[i]);
                    if (lcm > F / (a[i] / g)) {
                        ok = false;
                        break;
                    }

                    lcm = lcm / g * a[i];
                    if (lcm > F) {
                        ok = false;
                        break;
                    }
                }
            }

            if (!ok) 
            {
                continue;
            }

            ll first = ((I + lcm - 1) / lcm) * lcm;
            if (first > F) continue;
            ll last = (F / lcm) * lcm;
            ll cnt = (last - first) / lcm + 1;
            ll x = cnt;
            ll y = first + last;

            if (x % 2 == 0)
            {
                x /= 2;
            }
            else
            {
                y /= 2;
            }

            ll cur = ((x % MOD) * (y % MOD)) % MOD;

            if (bits % 2 == 1)
            {
                ans = (ans + cur) % MOD;
            }
            else
            {
                ans = (ans - cur + MOD) % MOD;
            }
        }

        cout << ans % MOD << '\n';
    }

    return 0;
}