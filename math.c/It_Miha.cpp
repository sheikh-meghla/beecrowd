#include <bits/stdc++.h>
using namespace std;

const int MAX = 200000;

int mu[MAX + 1];
bool isPrime[MAX + 1];
int primes[MAX + 1];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cntPrime = 0;

    for (int i = 0; i <= MAX; i++) {
        isPrime[i] = true;
        mu[i] = 0;
    }

    isPrime[0] = isPrime[1] = false;
    mu[1] = 1;

    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            primes[cntPrime++] = i;
            mu[i] = -1;
        }

        for (int j = 0; j < cntPrime; j++) {
            int p = primes[j];
            if (1LL * i * p > MAX) break;

            isPrime[i * p] = false;

            if (i % p == 0) {
                mu[i * p] = 0;
                break;
            } else {
                mu[i * p] = -mu[i];
            }
        }
    }

    int T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        long long low = 1;
        long long high = 40000000000LL;
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long squareFree = 0;

            for (long long d = 1; d * d <= mid; d++) {
                if (mu[d] == 0) continue;
                squareFree += 1LL * mu[d] * (mid / (d * d));
            }

            if (squareFree >= N) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}