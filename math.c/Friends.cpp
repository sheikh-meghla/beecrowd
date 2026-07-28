#include <bits/stdc++.h>
using namespace std;

int main() {

    function<long long(long long, long long)> ack =
        [&](long long m, long long n) -> long long {

        if (m == 0)
        {
            return n + 1;
        }

        if (n == 0)
        {
            return ack(m - 1, 1);
        }

        return ack(m - 1, ack(m, n - 1));
    };

    int T;
    cin >> T;

    while (T--) {
        long long m, n;
        cin >> m >> n;
        cout << ack(m, n) << '\n';
    }

    return 0;
}