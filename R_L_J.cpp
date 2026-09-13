#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while (cin >> s)
    {
        int p = s.find('+');
        int e = s.find('=');

        string x = s.substr(0, p);
        string y = s.substr(p + 1, e - p - 1);
        string z = s.substr(e + 1);

        if (x != "R" && y != "L")
        {
            cout << stoll(x) + stoll(y) << endl;
        }
        else if (x != "R" && z != "J")
        {
            cout << stoll(z) - stoll(x) << endl;
        }
        else
        {
            cout << stoll(z) - stoll(y) << endl;
        }
    }

    return 0;
}