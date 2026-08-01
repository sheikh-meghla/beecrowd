#include <bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    long long ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int n = a + b - 1;

        long long answer = fact(n) / (fact(b) * fact(n - b));

        cout << answer % 1300031 << endl;
    }

    return 0;
}