#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    while (getline(cin, s)) {
        stringstream ss(s);
        string word;

        char prev = 0;
        int cnt = 0;
        int ans = 0;

        while (ss >> word) {
            char ch = tolower(word[0]);

            if (ch == prev) {
                cnt++;
            } else {
                if (cnt >= 2)
                    ans++;

                prev = ch;
                cnt = 1;
            }
        }

        if (cnt >= 2)
            ans++;

        cout << ans << '\n';
    }

    return 0;
}