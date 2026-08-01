#include <bits/stdc++.h>
using namespace std;

long long int bill(long long int c)
{
    if (c <= 100)
        return c * 2;

    if (c <= 10000)
        return 200 + (c - 100) * 3;

    if (c <= 1000000)
        return 29900 + (c - 10000) * 5;

    return 4979900 + (c - 1000000) * 7;
}

long long int consume(long long int money)
{
    if (money <= 200)
        return money / 2;

    if (money <= 29900)
        return 100 + (money - 200) / 3;

    if (money <= 4979900)
        return 10000 + (money - 29900) / 5;

    return 1000000 + (money - 4979900) / 7;
}

int main()
{
    long long int A, B;

    while (cin >> A >> B)
    {
        if (A == 0 && B == 0)
        {
            break;
        }

        long long int total = consume(A);

        long long int low = 0;
        long long int high = total / 2;

        while (low <= high)
        {
            long long int mid = (low + high) / 2;

            long long int me = bill(mid);
            long long int neighbor = bill(total - mid);

            long long int diff = neighbor - me;

            if (diff == B)
            {
                cout << me << '\n';
                break;
            }

            if (diff > B)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return 0;
}