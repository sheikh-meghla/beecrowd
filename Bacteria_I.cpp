#include <bits/stdc++.h>
using namespace std;

int main() {

    string D, S;

    while (cin >> D >> S) {

        if (D.find(S) != string::npos) {
            cout << "Resistente\n";
        }
        else {
            cout << "Nao resistente\n";
        }
    }

    return 0;
}