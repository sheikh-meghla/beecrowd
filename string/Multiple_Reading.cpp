#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    int p;

    while (cin >> s >> p) {
        int ans = 0;
        int cnt = 0;

        for (char c : s) {
            if (c == 'R') {
                cnt++;

                if (cnt == p) {
                    ans++;
                    cnt = 0;
                }
            } else {
                if (cnt > 0) {
                    ans++;
                    cnt = 0;
                }

                ans++;
            }
        }

        if (cnt > 0)
        {
            ans++;
        }

        cout << ans << '\n';
    }

    return 0;
}