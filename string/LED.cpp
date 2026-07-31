#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int led[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    while (n--) {
        string s;
        cin >> s;

        int ans = 0;

        for (char c : s) {
            ans += led[c - '0'];
        }

        cout << ans << " leds" << endl;
    }

    return 0;
}