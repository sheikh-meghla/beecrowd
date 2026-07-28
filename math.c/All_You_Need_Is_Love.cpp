#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {

        string s1, s2;
        cin >> s1 >> s2;

        int a = 0, b = 0;

        for (char c : s1)
        {
            a = a * 2 + (c - '0');
        }

        for (char c : s2)
        {
            b = b * 2 + (c - '0');
        }

        cout << "Pair #" << tc << ": ";

        if (__gcd(a, b) > 1)
        {
            cout << "All you need is love!\n";
        }
        else
        {
            cout << "Love is not all you need!\n";
        }
    }

    return 0;
}