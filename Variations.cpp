#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        long long ans = 1;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'a' || s[i] == 'A' ||
                s[i] == 'e' || s[i] == 'E' ||
                s[i] == 'i' || s[i] == 'I' ||
                s[i] == 'o' || s[i] == 'O' ||
                s[i] == 's' || s[i] == 'S') 
            {
                ans *= 3;
            }
            else {
                ans *= 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}