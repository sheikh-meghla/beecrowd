#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;

    while (cin >> m >> n)
    {
        if (m == 0 && n == 0)
        {
            break;
        }

        int sum = m + n;

        int ans = 0;
        int place = 1;

        while (sum > 0)
        {
            int digit = sum % 10;

            if (digit != 0)
            {
                ans = digit * place + ans;
                place *= 10;
            }

            sum /= 10;
        }

        cout << ans << endl;
    }

    return 0;
}