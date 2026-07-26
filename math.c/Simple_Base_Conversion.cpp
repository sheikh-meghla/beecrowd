#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    while (cin >> s)
    {
        if (s[0] == '-')
            break;

        if (s.substr(0, 2) == "0x" || s.substr(0, 2) == "0X")
        {
            cout << stoll(s, nullptr, 16) << endl;
        }
        else
        {
            cout << "0x" << uppercase << hex << stoll(s) << endl;
            cout << dec;
        }
    }

    return 0;
}