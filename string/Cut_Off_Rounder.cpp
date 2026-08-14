#include <bits/stdc++.h>
using namespace std;

int main() {

    string num, cutoff;

    while (cin >> num >> cutoff) {

        string integerPart;
        string fractionPart;

        int pos = num.find('.');

        if (pos == -1) {
            // যেমন: 135
            integerPart = num;
            fractionPart = "";
        }
        else {
            // decimal-এর আগের অংশ
            integerPart = num.substr(0, pos);

            // decimal-এর পরের অংশ
            fractionPart = num.substr(pos + 1);
        }

        // যেমন ".001" হলে integerPart খালি হবে
        if (integerPart == "") {
            integerPart = "0";
        }

        // cutoff-এর decimal-এর পরের অংশ
        string cutoffFraction = cutoff.substr(2);

        // দুইটার length একই করি
        while (fractionPart.length() < cutoffFraction.length()) {
            fractionPart += '0';
        }

        // fraction > cutoff হলে উপরে round
        if (fractionPart > cutoffFraction) {
            int ans = stoi(integerPart);
            ans++;

            cout << ans << '\n';
        }
        else {
            cout << stoi(integerPart) << '\n';
        }
    }

    return 0;
}