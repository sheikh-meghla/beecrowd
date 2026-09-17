#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        
        string s;
        cin >> s;

        if (s.size() == 3 && s[0] == 'O' && s[1] == 'B') 
        {
            s = "OBI";
        }
        else if (s.size() == 3 && s[0] == 'U' && s[1] == 'R') 
        {
            s = "URI";
        }

        cout << s;

        if (n > 0)
        {
            cout << " ";
        }
    }

    cout << '\n';

    return 0;
}