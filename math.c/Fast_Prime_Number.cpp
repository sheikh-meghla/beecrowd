#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long n;
        cin >> n;

        bool prime = true;

        if (n < 2)
        {
            prime = false;
        }
        else if (n == 2)
        {
            prime = true;
        }
        else if (n % 2 == 0)
        {
            prime = false;
        }
        else
        {
            for (long long i = 3; i * i <= n; i += 2)
            {
                if (n % i == 0)
                {
                    prime = false;
                    break;
                }
            }
        }

        if (prime)
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not Prime" << endl;
        }
    }

    return 0;
}