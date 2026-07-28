#include <bits/stdc++.h>
using namespace std;

int main() {
    int D, VF, VG;

    while (cin >> D >> VF >> VG) {
        double guardTime = sqrt(D * D + 12.0 * 12.0) / VG;
        double thiefTime = 12.0 / VF;

        if (guardTime <= thiefTime)
        {
            cout << "S\n";
        }
        else
        {
            cout << "N\n";
        }
    }

    return 0;
}