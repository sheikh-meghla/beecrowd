#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    // সব অক্ষর ছোট হাতের করি
    for (int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    bool found = false;

    for (int i = 0; i <= s.size() - 5; i++) {
        if (s[i] == 'z' &&
            s[i + 1] == 'e' &&
            s[i + 2] == 'l' &&
            s[i + 3] == 'd' &&
            s[i + 4] == 'a') {

            found = true;
            break;
        }
    }

    if (found) {
        cout << "Link Bolado\n";
    }
    else {
        cout << "Link Tranquilo\n";
    }

    return 0;
}