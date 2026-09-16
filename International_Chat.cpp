#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string f_s;
        cin >> f_s;

        bool flag = true;

        for (int i = 1; i < n; i++) {
            string s;
            cin >> s;

            if (s != f_s) {
                flag = false;
            }
        }

        if (flag) {
            cout << f_s << endl;
        }
        else {
            cout << "ingles" << endl;
        }
    }

    return 0;
}