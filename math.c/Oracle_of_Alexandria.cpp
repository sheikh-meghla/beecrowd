#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int n = 0;
        int k = 0;

        int i = 0;
        while (i < (int)s.size() && isdigit(s[i])) {
            n = n * 10 + (s[i] - '0');
            i++;
        }

        while (i < (int)s.size()) {
            if (s[i] == '!') 
            {
                k++;
            }
            i++;
        }

        unsigned long long ans = 1;

        for (int x = n; x >= 1; x -= k)
        {
            ans *= x;
        }

        cout << ans << '\n';
    }

    return 0;
}