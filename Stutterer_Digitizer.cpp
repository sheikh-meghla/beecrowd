#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool flag = true;

    while (cin >> s) {

        if (s.size() >= 4) {
            if (s[0] == s[2] && s[1] == s[3]) {
                s.erase(0, 2);
            }
        }

        if (!flag) {
            cout << " ";
        }

        cout << s;
        flag = false;
    }

    cout << endl;

    return 0;
}