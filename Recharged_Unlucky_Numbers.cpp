#include <bits/stdc++.h>
using namespace std;

int main() {


    string n;
    cin >> n;

    bool flag = false;

    for (int i = 0; i < n.size() - 1; i++) {
        if (n[i] == '1' && n[i + 1] == '3') {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        cout << n << " es de Mala Suerte\n";
    }
    else
    {
        cout << n << " NO es de Mala Suerte\n";
    }

    return 0;
}