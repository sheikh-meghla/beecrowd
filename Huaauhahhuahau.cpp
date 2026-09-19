#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    string v = "";

    for (int i = 0; i < s.size(); i++) {

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') 
        {

            v += s[i];
        }
    }

    string rev = v;
    reverse(rev.begin(), rev.end());

    if (v == rev) {
        cout << "S\n";
    }
    else {
        cout << "N\n";
    }

    return 0;
}