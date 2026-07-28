#include <bits/stdc++.h>
using namespace std;

int main() {

    int R, N;
    int tc = 1;

    while (cin >> R >> N) {

        if (R == 0 && N == 0)
        {
            break;
        }

        int d = (R + N - 1) / N - 1;

        cout << "Case " << tc++ << ": ";

        if (d > 26)
        {
            cout << "impossible\n";
        }
        else
        {
            cout << d << "\n";
        }
    }

    return 0;
}