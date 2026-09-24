#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count5 = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '5') {
            count5++;
        }
    }

    string a;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '5') {
            a += s[i];
        }
    }

    int pos = 0;

    while (pos < a.size() && a[pos] == '3') {
        cout << '3';
        pos++;
    }

    while (count5--) {
        cout << '5';
    }

    while (pos < a.size()) {
        cout << a[pos];
        pos++;
    }

    cout << '\n';

    return 0;
}