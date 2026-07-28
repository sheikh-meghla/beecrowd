#include <bits/stdc++.h>
using namespace std;

int main() {


    int T;
    cin >> T;

    while (T--) {
        int N, I;
        double p;
        cin >> N >> p >> I;

        if (p == 0.0) {
            cout << fixed << setprecision(4) << 0.0000 << '\n';
            continue;
        }
        double ans = (pow(1.0 - p, I - 1) * p) / (1.0 - pow(1.0 - p, N));
        cout << fixed << setprecision(4) << ans << '\n';
    }

    return 0;
}