#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int l;
        cin >> l;

        int hash = 0;

        for (int i = 0; i < l; i++) {
            string s;
            cin >> s;

            for (int j = 0; j < s.size(); j++) {
                hash += (s[j] - 'A') + i + j;
            }
        }

        cout << hash << '\n';
    }

    return 0;
}