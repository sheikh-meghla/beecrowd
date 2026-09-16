#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[4];

    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }

    int columns = s[0].size();

    int f = 0;

    for (int i = 0; i < 4; i++)
    {
        f = f * 10 + (s[i][0] - '0');
    }

    int l = 0;

    for (int i = 0; i < 4; i++)
    {
        l = l * 10 + (s[i][columns - 1] - '0');
    }

    for (int col = 1; col < columns - 1; col++)
    {
        int m = 0;

        for (int row = 0; row < 4; row++)
        {
            m = m * 10 + (s[row][col] - '0');
        }

        int c = (f * m + l) % 257;

        cout << char(c);
    }

    cout << endl;

    return 0;
}