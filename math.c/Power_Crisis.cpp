#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    while (cin >> n && n) {
        int m = 1;

        while (true) {
            int target = 11;
            int pos = 0;
            bool ok = true;

            for (int people = n - 1; people > 1; people--) {
                pos = (pos + m - 1) % people;

                if (pos == target) {
                {
                    ok = false;
                }
                    break;
                }

                if (pos < target)
                {
                    target--;
                }
            }

            if (ok) {
                cout << m << '\n';
                break;
            }

            m++;
        }
    }

    return 0;
}