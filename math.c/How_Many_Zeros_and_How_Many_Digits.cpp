#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MAXN = (1 << 20);

    vector<long double> pre(MAXN + 1, 0);

    for (int i = 1; i <= MAXN; i++)
        pre[i] = pre[i - 1] + log10((long double)i);

    long long n;
    int b;

    while (cin >> n >> b) {

        vector<pair<int,int>> fac;

        int x = b;

        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                int cnt = 0;
                while (x % i == 0) {
                    cnt++;
                    x /= i;
                }
                fac.push_back({i,cnt});
            }
        }

        if (x > 1)
        {
            fac.push_back({x,1});
        }

        long long zeros = LLONG_MAX;

        for (auto [p,a] : fac) {

            long long e = 0;
            long long t = n;

            while (t) {
                t /= p;
                e += t;
            }

            zeros = min(zeros, e / a);
        }

        int digits;

        if (n == 0 || n == 1)
        {
            digits = 1;
        }
        else
        {
            digits = (int)(pre[n] / log10((long double)b)) + 1;
        }

        cout << zeros << " " << digits << "\n";
    }

    return 0;
}