#include <bits/stdc++.h>
using namespace std;

int main() {

    long long N, A, B;

    while (cin >> N >> A >> B) {
        if (N == 0 && A == 0 && B == 0)
        {
            break;
        }

        long long l = (A / gcd(A, B)) * B;

        cout << N / A + N / B - N / l << '\n';
    }

    return 0;
}