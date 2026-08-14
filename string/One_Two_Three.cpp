#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (s.length() == 5) {
            cout << 3 << endl;
        }
        else {
            int one = 0, two = 0;

            for (int i = 0; i < 3; i++) {
                if (s[i] == "one"[i])
                {
                    one++;
                }
                if (s[i] == "two"[i])
                {
                    two++;
                }
            }

            if (one >= 2)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}