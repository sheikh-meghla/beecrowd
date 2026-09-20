#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    while (cin >> s) {

        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            freq[s[i] - 'a']++;
        }

        int odd = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                odd++;
            }
        }

        if (odd == 0) 
        {
            cout << 0 << '\n';
        }
        else 
        {
            cout << odd - 1 << '\n';
        }
    }

    return 0;
}