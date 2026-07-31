#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    int led[] = {6,2,5,5,4,5,6,3,7,6};

    while (t--) {

        string s;
        cin >> s;

        int sum = 0;

        for (char c : s) {
            sum += led[c - '0'];
        }

        cout << sum << " leds" << endl;
    }

    return 0;
}