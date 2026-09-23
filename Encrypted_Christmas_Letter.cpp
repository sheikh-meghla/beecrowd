#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '@') {
                s[i] = 'a';
            }
            else if (s[i] == '&') {
                s[i] = 'e';
            }
            else if (s[i] == '!') {
                s[i] = 'i';
            }
            else if (s[i] == '*') {
                s[i] = 'o';
            }
            else if (s[i] == '#') {
                s[i] = 'u';
            }
        }

        cout << s << endl;
    }

    return 0;
}