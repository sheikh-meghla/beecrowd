#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string decimalToBinary(int n) {
    if (n == 0) return "0";

    string s;
    while (n > 0) {
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        string num, base;
        cin >> num >> base;

        int value;

        if (base == "bin") {
            value = stoi(num, nullptr, 2);
        }
        else if (base == "dec") {
            value = stoi(num);
        }
        else { // hex
            value = stoi(num, nullptr, 16);
        }

        cout << "Case " << tc << ":\n";

        if (base != "dec")
            cout << value << " dec\n";

        if (base != "hex") {
            cout << hex << nouppercase << value << " hex\n";
            cout << dec;
        }

        if (base != "bin")
            cout << decimalToBinary(value) << " bin\n";

        cout << "\n";
    }

    return 0;
}