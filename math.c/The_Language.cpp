#include <bits/stdc++.h>
using namespace std;

int main()
{


    int N, Q;

    while (cin >> N >> Q)
    {
        if (N == 0 && Q == 0)
        {
            break;
        }

        string T;
        cin >> T;

        int n = N - Q + 1;

        int MAX_DIGITS = 5000;

        vector<int> fact(1, 1);
        bool discarded = false;

        for (int i = 2; i <= n; i++)
        {
            int carry = 0;

            for (int j = 0; j < fact.size(); j++)
            {
                int value = fact[j] * i + carry;

                fact[j] = value % 10;
                carry = value / 10;
            }

            while (carry > 0)
            {
                fact.push_back(carry % 10);
                carry /= 10;
            }

            if (fact.size() > T.size())
            {
                discarded = true;
                break;
            }

            if (fact.size() == T.size())
            {
                bool greater = false;

                for (int j = fact.size() - 1, k = 0;
                     j >= 0;
                     j--, k++)
                {
                    int digit = fact[j];
                    int tDigit = T[k] - '0';

                    if (digit > tDigit)
                    {
                        greater = true;
                        break;
                    }

                    if (digit < tDigit)
                    {
                        break;
                    }
                }

                if (greater)
                {
                    discarded = true;
                    break;
                }
            }
        }

        if (discarded)
        {
            cout << "descartado\n";
        }
        else
        {
            for (int i = fact.size() - 1; i >= 0; i--)
            {
                cout << fact[i];
            }

            cout << '\n';
        }
    }

    return 0;
}