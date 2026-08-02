#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;

        int mx = max(a.size(), b.size());

        for (int i = 0; i < mx; i++) {
            if (i < a.size()) 
            {
                cout << a[i];
            }
            if (i < b.size()) 
            {
                cout << b[i];
            }
        }

        cout << '\n';

    }
    
    return 0;
}