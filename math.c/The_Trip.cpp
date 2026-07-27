#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    while (cin >> n && n) {

        long long money[1000];
        long long total = 0;

        for (int i = 0; i < n; i++) {
            double x;
            cin >> x;
            money[i] = llround(x * 100.0);
            total += money[i];
        }

        long long low = total / n;
        long long high = low;
        if (total % n) high++;

        long long give = 0;
        long long take = 0;

        for (int i = 0; i < n; i++)
        {
            long long x = money[i];

            if (x < low)
            {
                give += low - x;
            }
            else if (x > high)
            {
                take += x - high;
            }
        }

        cout << "$" << fixed << setprecision(2) << max(give, take) / 100.0 << "\n";
    }

    return 0;
}