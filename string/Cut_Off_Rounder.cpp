#include <bits/stdc++.h>
using namespace std;

int main() {

    string num, cutoff;

    while (cin >> num >> cutoff) {

        string integerPart;
        string fractionPart;

        int pos = num.find('.');

        if (pos == -1) {
            integerPart = num;
            fractionPart = "";
        }
        else {
            integerPart = num.substr(0, pos);

            fractionPart = num.substr(pos + 1);
        }

        if (integerPart == "") {
            integerPart = "0";
        }

        string cutoffFraction = cutoff.substr(2);

        while (fractionPart.length() < cutoffFraction.length()) {
            fractionPart += '0';
        }

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