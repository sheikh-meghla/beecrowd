#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {
        bool l = false;
        bool u = false;
        bool d = false;
        bool v = true;

        int len = s.size();

        if (len < 6 || len > 32) {
            v = false;
        }

        for (int i = 0; i < len; i++) {

            if (s[i] >= 'a' && s[i] <= 'z') {
                l = true;
            }
            else if (s[i] >= 'A' && s[i] <= 'Z') {
                u = true;
            }
            else if (s[i] >= '0' && s[i] <= '9') {
                d = true;
            }
            else {
                v = false;
            }
        }

        if (v && l && u && d) {
            cout << "Senha valida.\n";
        }
        else {
            cout << "Senha invalida.\n";
        }
    }

    return 0;
}