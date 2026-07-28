#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string a, b;
        cin >> a >> b;

        if (b.size() <= a.size() &&
            a.substr(a.size() - b.size()) == b)
        {
            cout << "encaixa\n";
        }
        else
        {
            cout << "nao encaixa\n";
        }
    }

    return 0;
}