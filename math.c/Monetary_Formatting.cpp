#include <bits/stdc++.h>
using namespace std;

int main() {
    long long dollars;
    int cents;

    while (cin >> dollars >> cents) {

        string s = to_string(dollars);
        string ans;

        int counter = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            ans += s[i];
            counter++;

            if (counter == 3 && i != 0) {
                ans += ',';
                counter = 0;
            }
        }

        reverse(ans.begin(), ans.end());

        cout << "$" << ans << "."
             << setw(2) << setfill('0') << cents << "\n";
    }

    return 0;
}