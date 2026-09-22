#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (cin >> s) {
        if (s.size() >= 4) {
            if (s[0] == s[2] && s[1] == s[3]) {
                s.erase(0, 2);
            }
        }

        cout << s << " ";
    }

    return 0;
}