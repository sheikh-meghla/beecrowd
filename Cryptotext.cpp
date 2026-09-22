#include <bits/stdc++.h>
using namespace std;

int main() {
    int C;
    cin >> C;

    while (C--) {
        string s;
        cin >> s;

        string ans;

        for (int i = 0; i < s.size(); i++) {
            if (islower(s[i])) {
                ans += s[i];
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ans << endl;
    }

    return 0;
}