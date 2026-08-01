#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<long long> a(n);

        for (auto &x : a)
            cin >> x;


        if (n == 1 || n % 2 == 1) {
            cout << "NO\n";
            continue;
        }


        long long minOdd = 1e18;   
        long long maxEven = -1;    


        for (int i = 0; i < n; i++) {

            if (i % 2 == 0) {
                minOdd = min(minOdd, a[i]);
            }
            else {
                maxEven = max(maxEven, a[i]);
            }
        }


        if (minOdd - maxEven > 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}