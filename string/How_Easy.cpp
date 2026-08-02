#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;

    while (getline(cin, line)) {
        stringstream ss(line);
        string s;

        int totalLetters = 0, totalWords = 0;

        while (ss >> s) {
            bool ok = true;
            int len = s.size();

            if (s.back() == '.') 
            {
                len--;
            }  

            if (len == 0) 
            {
                ok = false;
            }

            for (int i = 0; i < len; i++) {
                if (!isalpha(s[i])) {
                    ok = false;
                    break;
                }
            }

            if (ok == true && len < (int)s.size() - 1) ok = false;

            if (ok == true) {
                totalWords++;
                totalLetters += len;
            }
        }

        int avg = 0;
        if (totalWords) avg = totalLetters / totalWords;

        if (avg <= 3)
        {
            cout << 250 << '\n';
        }
        else if (avg <= 5)
        {
            cout << 500 << '\n';
        }
        else
        {
            cout << 1000 << '\n';
        }
    }

    return 0;
}