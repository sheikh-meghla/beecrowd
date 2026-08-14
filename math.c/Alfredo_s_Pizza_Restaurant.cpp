#include <bits/stdc++.h>
using namespace std;

int main() {

    int R;
    int tc = 1;

    while (cin >> R && R != 0) {
        int W, L;
        cin >> W >> L;

        if (1LL * W * W + 1LL * L * L <= 4LL * R * R) {
            cout << "Pizza " << tc << " fits on the table.\n";
        } 
        else {
            cout << "Pizza " << tc << " does not fit on the table.\n";
        }

        tc++;
    }

    return 0;
}