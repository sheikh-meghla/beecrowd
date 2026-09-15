#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string s;
        getline(cin, s);

        int arr[26] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            if (c >= 'a' && c <= 'z')
            {
                arr[c - 'a'] = 1;
            }
        }

        int count = 0;

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] == 1)
            {
                count++;
            }
        }

        if (count == 26)
        {
            cout << "frase completa\n";
        }
        else if (count >= 13)
        {
            cout << "frase quase completa\n";
        }
        else
        {
            cout << "frase mal elaborada\n";
        }
    }

    return 0;
}