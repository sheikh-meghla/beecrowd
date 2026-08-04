#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int instance = 1;

    while (cin >> n && n != 0) {
        if (instance > 1) {
            cout << "\n";
        }

        cout << "Instancia " << instance++ << "\n";

        int max_m = -1;
        int best_k = -1;

        int limit = sqrt(n);
        for (int d = limit; d >= 2; --d) {
            if (n % (d * d) == 0) {
                max_m = d - 1;
                best_k = n / (d * d);
                break;
            }
        }

        if (max_m != -1) {
            int p1 = max_m * (best_k - 1);
            int p2 = max_m * (best_k + 1);
            int p3 = best_k;
            int p4 = best_k * max_m * max_m;

            cout << max_m << " " << p1 << " " << p2 << " " << p3 << " " << p4 << "\n";
        } else {
            cout << n << " nao e quadripartido\n";
        }
    }

    return 0;
}