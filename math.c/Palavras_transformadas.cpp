#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int ans = 0;

    for (int i = 0; i < s.size(); i++) {
        int diff = abs(s[i] - t[i]);
        ans += min(diff, 26 - diff);
    }

    cout << ans << '\n';

    return 0;
}