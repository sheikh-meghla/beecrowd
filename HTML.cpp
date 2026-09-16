#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    int len = 0;

    while (cin >> s) {

        if (s == "<br>") {
            cout << '\n';
            len = 0;
        }

        else if (s == "<hr>") {

            if (len != 0) {
                cout << '\n';
            }

            cout << string(80, '-') << '\n';
            len = 0;
        }

        else {

            if (len == 0) {
                cout << s;
                len = s.length();
            }

            else if (len + 1 + s.length() <= 80) {
                cout << ' ' << s;
                len += 1 + s.length();
            }

            else {
                cout << '\n';
                cout << s;
                len = s.length();
            }
        }
    }

    cout << '\n';

    return 0;
}