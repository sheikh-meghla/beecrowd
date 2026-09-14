#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    int i;


    for (i = 0; i < a.size() && i < b.size(); i++) {
        if (a[i] != b[i]) {
            break;
        }
    }

    int j = 0;

    for (j = 0; j < a.size() - i && j < b.size() - i; j++) {

        int x = a.size() - 1 - j;
        int y = b.size() - 1 - j;

        if (a[x] != b[y]) {
            break;
        }
    }

    int answer = b.size() - i - j;

    cout << answer << '\n';

    return 0;
}