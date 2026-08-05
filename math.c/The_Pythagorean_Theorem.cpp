#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;

    while (cin >> a >> b >> c) {
        vector<long long> v = {a, b, c};
        sort(v.begin(), v.end());

        a = v[0];
        b = v[1];
        c = v[2];

        if (a * a + b * b == c * c) {
            if (gcd(gcd(a, b), c) == 1)
            {
                cout << "tripla pitagorica primitiva\n";
            }
            else
            {
                cout << "tripla pitagorica\n";
            }
        } else {
            cout << "tripla\n";
        }
    }

    return 0;
}