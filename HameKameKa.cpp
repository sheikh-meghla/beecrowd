#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while (n--) {

        string s;
        cin >> s;

        int before = 0;
        int after = 0;
        bool flag = false;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == 'k') {
                flag = true;
            }
            else if (s[i] == 'a') {

                if (flag == false) {
                    before++;
                }
                else {
                    after++;
                }
            }
        }

        int total = before * after;

        cout << "k";

        for (int i = 0; i < total; i++) {
            cout << "a";
        }

        cout << "\n";
    }

    return 0;
}