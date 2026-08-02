#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        int k;

        cin >> s;
        cin >> k;

        for (char &c : s) {
            c = c - k;

            if (c < 'A')
            {
                c += 26;
            }
        }

        cout << s << '\n';
    }

    return 0;
}