#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while (n--) {

        string s;
        cin >> s;

        int sum = 0;
        int num = 0;

        for (char c : s) {

            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            else {
                sum += num;
                num = 0;
            }
        }

        sum += num;

        cout << sum << '\n';
    }

    return 0;
}