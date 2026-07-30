#include <bits/stdc++.h>
using namespace std;

int main() {
    string d, n;

    while (cin >> d >> n) {
        if (d == "0" && n == "0")
            break;

        string ans = "";

        for (char c : n) {
            if (c != d[0])
                ans += c;
        }

        int i = 0;
        while (i < ans.size() && ans[i] == '0')
            i++;

        if (i == ans.size()) {
            cout << 0 << "\n";
        } else {
            cout << ans.substr(i) << "\n";
        }
    }

    return 0;
}