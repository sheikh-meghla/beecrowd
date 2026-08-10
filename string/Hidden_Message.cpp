#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string s;
        getline(cin, s);

        int len = size(s);

        for(int i = 0;i<len;i++){
            if(s[i] != '.' && (i == 0 || s[i-1] == '.')){
                cout << s[i];
            }
        }

        cout << "\n";
    }

    return 0;
}