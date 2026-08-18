#include <bits/stdc++.h>
using namespace std;

int main()
{
    while (true)
    {
        int n;
        cin >> n;

        if (n == 0)
        {
            break;
        }

        vector<long long> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long sum = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            long long x = arr[i] + sum;
            sum += x;
        }

        cout << sum << '\n';
    }

    return 0;
}