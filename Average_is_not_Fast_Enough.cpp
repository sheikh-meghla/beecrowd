#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double d;

    cin >> n >> d;

    int t;

    while (cin >> t) {

        int total = 0;
        bool flag = false;

        for (int i = 0; i < n; i++) {

            string s;
            cin >> s;

            if (s == "-:--:--") {
                flag = true;
                continue;
            }

            int h = s[0] - '0';
            int m = (s[2] - '0') * 10 + (s[3] - '0');
            int sec = (s[5] - '0') * 10 + (s[6] - '0');

            total += h * 3600 + m * 60 + sec;
        }

        if (t < 10)
        {
            cout << "  ";
        }
        else if (t < 100)
        {
            cout << " ";
        }

        cout << t << ": ";

        if (flag) {
            cout << "-" << endl;
        }
        else {
            int avg = round(total / d);

            int minute = avg / 60;
            int second = avg % 60;

            cout << minute << ":";

            if (second < 10)
            {
                cout << "0";
            }

            cout << second << " min/km" << endl;
        }
    }

    return 0;
}