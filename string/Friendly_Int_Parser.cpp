#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {

        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        s.erase(remove(s.begin(), s.end(), ','), s.end());
        for (char &c : s) {

            if (c == 'l' || c == 'I')
            {
                c = '1';
            }
            if (c == 'o' || c == 'O')
            {
                c = '0';
            }
        }

        if (s.empty()) {
            cout << "error\n";
            continue;
        }

        bool valid = true;

        for (char c : s) {
            if (c < '0' || c > '9') {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << "error\n";
            continue;
        }

        int pos = 0;

        while (pos < (int)s.size() - 1 && s[pos] == '0') {
            pos++;
        }

        s = s.substr(pos);

        if (s.size() > 10 ||
            (s.size() == 10 && s > "2147483647")) {

            cout << "error\n";
        }
        else {
            cout << s << '\n';
        }
    }

    return 0;
}