#include <bits/stdc++.h>
using namespace std;

int main() {

    int C;
    cin >> C;

    while (C--) {

        int N;
        cin >> N;

        vector<string> v;

        while (N--) {

            string name, s1;
            cin >> name >> s1;

            if (s1 == "chirrin" || s1 == "charrin") {

                bool found = false;

                for (string x : v) {
                    if (x == name) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    v.push_back(name);
                }
            }
            else if (s1 == "chirrion") {

                for (int i = 0; i < v.size(); i++) {

                    if (v[i] == name) {
                        v.erase(v.begin() + i);
                        break;
                    }
                }
            }
        }

        sort(v.begin(), v.end());

        cout << "TOTAL\n";

        for (string x : v) {
            cout << x << '\n';
        }
    }

    return 0;
}