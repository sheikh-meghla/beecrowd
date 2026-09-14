#include <bits/stdc++.h>
using namespace std;

int main()
{
    int C;
    cin >> C;

    while (C--)
    {
        string a, b, s;

        cin >> a >> b >> s;

        bool flag = false;

        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            int posA = -1;
            int posB = -1;

            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] == ch && s[i] == '_')
                {
                    posA = i;
                    break;
                }
            }

            for (int i = 0; i < b.size(); i++)
            {
                if (b[i] == ch && s[i] == '_')
                {
                    posB = i;
                    break;
                }
            }

            if (posA != -1 && posB != -1 && posA != posB)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Y\n";
        }
        else
        {
            cout << "N\n";
        }
    }

    return 0;
}