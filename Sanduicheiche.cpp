#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    while (cin >> s) {

        int n = s.size();

        for (int len = 1; len <= n / 2; len++) {

            bool flag = true;

            for (int i = 0; i < len; i++) {

                if (s[n - len + i] != s[n - 2 * len + i]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                s.erase(n - len);
                break;
            }
        }

        cout << s << endl;
    }

    return 0;
}