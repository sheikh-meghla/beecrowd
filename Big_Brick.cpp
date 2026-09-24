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

        vector<string> v;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a')
                v.push_back("2");
            else if (s[i] == 'b')
                v.push_back("22");
            else if (s[i] == 'c')
                v.push_back("222");

            else if (s[i] == 'd')
                v.push_back("3");
            else if (s[i] == 'e')
                v.push_back("33");
            else if (s[i] == 'f')
                v.push_back("333");

            else if (s[i] == 'g')
                v.push_back("4");
            else if (s[i] == 'h')
                v.push_back("44");
            else if (s[i] == 'i')
                v.push_back("444");

            else if (s[i] == 'j')
                v.push_back("5");
            else if (s[i] == 'k')
                v.push_back("55");
            else if (s[i] == 'l')
                v.push_back("555");

            else if (s[i] == 'm')
                v.push_back("6");
            else if (s[i] == 'n')
                v.push_back("66");
            else if (s[i] == 'o')
                v.push_back("666");

            else if (s[i] == 'p')
                v.push_back("7");
            else if (s[i] == 'q')
                v.push_back("77");
            else if (s[i] == 'r')
                v.push_back("777");
            else if (s[i] == 's')
                v.push_back("7777");

            else if (s[i] == 't')
                v.push_back("8");
            else if (s[i] == 'u')
                v.push_back("88");
            else if (s[i] == 'v')
                v.push_back("888");

            else if (s[i] == 'w')
                v.push_back("9");
            else if (s[i] == 'x')
                v.push_back("99");
            else if (s[i] == 'y')
                v.push_back("999");
            else if (s[i] == 'z')
                v.push_back("9999");

            else if (s[i] == 'A')
                v.push_back("#2");
            else if (s[i] == 'B')
                v.push_back("#22");
            else if (s[i] == 'C')
                v.push_back("#222");

            else if (s[i] == 'D')
                v.push_back("#3");
            else if (s[i] == 'E')
                v.push_back("#33");
            else if (s[i] == 'F')
                v.push_back("#333");

            else if (s[i] == 'G')
                v.push_back("#4");
            else if (s[i] == 'H')
                v.push_back("#44");
            else if (s[i] == 'I')
                v.push_back("#444");

            else if (s[i] == 'J')
                v.push_back("#5");
            else if (s[i] == 'K')
                v.push_back("#55");
            else if (s[i] == 'L')
                v.push_back("#555");

            else if (s[i] == 'M')
                v.push_back("#6");
            else if (s[i] == 'N')
                v.push_back("#66");
            else if (s[i] == 'O')
                v.push_back("#666");

            else if (s[i] == 'P')
                v.push_back("#7");
            else if (s[i] == 'Q')
                v.push_back("#77");
            else if (s[i] == 'R')
                v.push_back("#777");
            else if (s[i] == 'S')
                v.push_back("#7777");

            else if (s[i] == 'T')
                v.push_back("#8");
            else if (s[i] == 'U')
                v.push_back("#88");
            else if (s[i] == 'V')
                v.push_back("#888");

            else if (s[i] == 'W')
                v.push_back("#9");
            else if (s[i] == 'X')
                v.push_back("#99");
            else if (s[i] == 'Y')
                v.push_back("#999");
            else if (s[i] == 'Z')
                v.push_back("#9999");

            else if (s[i] == ' ')
                v.push_back("0");
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (i > 0)
            {
                char a = v[i - 1].back();
                char b = v[i][0];

                if (a == b && v[i][0] != '#')
                {
                    cout << "*";
                }
            }

            cout << v[i];
        }

        cout << endl;
    }

    return 0;
}
