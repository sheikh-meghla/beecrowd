#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        int freq[26] = {0};

        for (char c : s) {
            if (isalpha(c)) {
                c = tolower(c);
                freq[c - 'a']++;
            }
        }

        int mx = 0;
        for (int i = 0; i < 26; i++) {
            mx = max(mx, freq[i]);
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] == mx)
            {
                cout << char(i + 'a');
            }
        }

        cout << '\n';
    }

    return 0;
}