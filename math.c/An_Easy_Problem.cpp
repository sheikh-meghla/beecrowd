#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    while (cin >> s) {
        long long sum = 0;
        int mx = 1;

        for (char c : s) {
            if (c == '-') 
            {
                continue;
            }

            int v;

            if (c >= '0' && c <= '9')
            {
                v = c - '0';
            }
            else if (c >= 'A' && c <= 'Z')
            {
                v = c - 'A' + 10;
            }
            else
            {
                v = c - 'a' + 36;
            }

            sum += v;
            mx = max(mx, v);
        }

        int start = max(2, mx + 1);
        bool found = false;

        for (int base = start; base <= 62; base++) {
            if (sum % (base - 1) == 0) {
                cout << base << '\n';
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "such number is impossible!\n";
        }
    }

    return 0;
}