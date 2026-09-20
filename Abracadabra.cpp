#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    while (cin >> s) {

        int n = s.size();

        for (int i = n; i >= 1; i--) {
            for (int j = 0; j < n - i; j++) {
                cout << " ";
            }

            for (int j = 0; j < i; j++) {

                cout << s[j];

                if (j != i - 1) {
                    cout << " ";
                }
            }

            cout << "\n";
        }

        cout << "\n";
    }

    return 0;
}