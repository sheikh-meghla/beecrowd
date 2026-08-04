#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {

    int64 A, B;

    while (cin >> A >> B) {

        int64 ansB = 0;

        if (B > 0) {
            for (int i = 0; i <= 60; i++) {
                int64 half = 1LL << i;
                int64 block = half << 1;

                int64 full = (B + 1) / block;
                int64 rem = (B + 1) % block;

                ansB += full * half;
                if (rem > half)
                    ansB += rem - half;
            }
        }

        int64 ansA = 0;
        int64 x = A - 1;

        if (x > 0) {
            for (int i = 0; i <= 60; i++) {
                int64 half = 1LL << i;
                int64 block = half << 1;

                int64 full = (x + 1) / block;
                int64 rem = (x + 1) % block;

                ansA += full * half;
                if (rem > half)
                    ansA += rem - half;
            }
        }

        cout << ansB - ansA << '\n';
    }

    return 0;
}