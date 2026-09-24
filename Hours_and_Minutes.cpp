#include <bits/stdc++.h>
using namespace std;

int main() {
    int A;

    while (cin >> A) {

        bool flag = false;

        for (int t = 0; t < 720; t++) {

            int m = t % 60;
            int h = t / 12;

            int d = abs(m - h);

            d = min(d, 60 - d);

            int angle = d * 6;

            if (angle == A) {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Y\n";
        }
        else
        {
            cout << "N\n";
        }
    }

    return 0;
}
