#include <iostream>
using namespace std;

int main() {

    int C;
    cin >> C;

    while (C--) {
        int N;
        cin >> N;

        long long wx, wy;
        cin >> wx >> wy;

        long long best = (1LL << 62);
        int answer = 1;

        for (int i = 1; i <= N; i++) {
            long long x, y;
            cin >> x >> y;

            long long dx = x - wx;
            long long dy = y - wy;
            long long dist = dx * dx + dy * dy;

            if (dist < best) {
                best = dist;
                answer = i;
            }
        }

        cout << answer << '\n';
    }

    return 0;
