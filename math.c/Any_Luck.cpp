#include <bits/stdc++.h>
using namespace std;

int main() {


    vector<long long> lucky;
    queue<long long> q;

    q.push(4);
    q.push(7);

    while (!q.empty()) {
        long long x = q.front();
        q.pop();

        lucky.push_back(x);

        if (x <= 214748364) {
            q.push(x * 10 + 4);
            q.push(x * 10 + 7);
        }
    }

    long long n;

    while (cin >> n) {

        bool isLucky = true;
        long long temp = n;

        while (temp > 0) {
            int d = temp % 10;
            if (d != 4 && d != 7) {
                isLucky = false;
                break;
            }
            temp /= 10;
        }

        if (isLucky) {
            cout << "sortudo\n";
            continue;
        }

        bool ok = false;

        for (long long x : lucky) {
            if (x > n) break;

            if (n % x == 0) {
                ok = true;
                break;
            }
        }

        if (ok)
            cout << "quase sortudo\n";
        else
            cout << "azarado\n";
    }

    return 0;
}