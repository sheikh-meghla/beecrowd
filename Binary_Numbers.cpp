#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;

    cin >> S >> T;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] > T[i])
        {
            cout << S << '\n';
            return 0;
        }

        if (S[i] < T[i])
        {
            cout << T << '\n';
            return 0;
        }
    }

    return 0;
}