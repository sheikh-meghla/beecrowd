#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while (n--) {

        string s;
        cin >> s;

        if (s.length() != 20) {
            cout << "INVALID DATA\n";
            continue;
        }

        if (s[0] != 'R' || s[1] != 'A') {
            cout << "INVALID DATA\n";
            continue;
        }

        bool flag = true;

        for (int i = 2; i < 20; i++) {
            if (!isdigit(s[i])) {
                flag = false;
                break;
            }
        }

        if (!flag) {
            cout << "INVALID DATA\n";
            continue;
        }

        int pos = 2;

        while (pos < 20 && s[pos] == '0') {
            pos++;
        }

        cout << s.substr(pos) << '\n';
    }

    return 0;
}