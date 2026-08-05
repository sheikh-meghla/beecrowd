#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> fermat = {3, 5, 17, 257, 65537};

    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin >> n;

        while (n % 2 == 0)
            n /= 2;

        bool ok = true;

        for (int p : fermat) {
            if (n % p == 0) {
                n /= p;
                if (n % p == 0) { 
                    ok = false;
                    break;
                }
            }
        }

        if (ok && n == 1)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}