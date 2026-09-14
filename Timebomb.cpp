#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[5];

    for (int i = 0; i < 5; i++) {
        getline(cin, s[i]);
    }

    string p[10] = {
        "***" "* *" "* *" "* *" "***",
        "  *" "  *" "  *" "  *" "  *",
        "***" "  *" "***" "*  " "***",
        "***" "  *" "***" "  *" "***",
        "* *" "* *" "***" "  *" "  *",
        "***" "*  " "***" "  *" "***",
        "***" "*  " "***" "* *" "***",
        "***" "  *" "  *" "  *" "  *",
        "***" "* *" "***" "* *" "***",
        "***" "* *" "***" "  *" "***"
    };

    string number = "";

    for (int j = 0; j < s[0].size(); j += 4) {

        string s1 = "";

        s1 += s[0][j];
        s1 += s[0][j + 1];
        s1 += s[0][j + 2];

        s1 += s[1][j];
        s1 += s[1][j + 1];
        s1 += s[1][j + 2];

        s1 += s[2][j];
        s1 += s[2][j + 1];
        s1 += s[2][j + 2];

        s1 += s[3][j];
        s1 += s[3][j + 1];
        s1 += s[3][j + 2];

        s1 += s[4][j];
        s1 += s[4][j + 1];
        s1 += s[4][j + 2];

        int digit = -1;

        for (int d = 0; d < 10; d++) {
            if (s1 == p[d]) {
                digit = d;
                break;
            }
        }

        if (digit == -1) {
            cout << "BOOM!!\n";
            return 0;
        }

        number += char('0' + digit);
    }

    int sum = 0;

    for (char c : number) {
        sum += c - '0';
    }

    int last = number[number.size() - 1] - '0';

    if (last % 2 == 0 && sum % 3 == 0)
    {
        cout << "BEER!!\n";
    }
    else
    {
        cout << "BOOM!!\n";
    }

    return 0;
}