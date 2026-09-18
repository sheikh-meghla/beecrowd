#include <bits/stdc++.h>
using namespace std;

int main() {

    int C;
    cin >> C;

    while (C--) {

        int start, end;
        cin >> start >> end;

        string s = "";

        for (int i = start; i <= end; i++) {

            stringstream ss;
            ss << i;

            s += ss.str();
        }

        cout << s;

        reverse(s.begin(), s.end());

        cout << s << endl;
    }

    return 0;
}