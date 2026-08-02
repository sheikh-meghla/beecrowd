#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    while (n--) {
        string a, b;
        cin >> a >> b;

        if (b.size() > a.size()) {
            cout << "nao encaixa\n";
        } 
        else {
            if (a.substr(a.size() - b.size()) == b)
            {
                cout << "encaixa\n";
            }
            else
            {
                cout << "nao encaixa\n";
            }
        }
    }

    return 0;
}