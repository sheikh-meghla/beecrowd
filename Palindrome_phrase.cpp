#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    bool palindrome = true;

    int l = 0;
    int r = s.size() - 1;

    while (l < r)
    {
        if (s[l] != s[r])
        {
            palindrome = false;
            break;
        }

        l++;
        r--;
    }

    if (palindrome)
    {
        cout << "A frase [" << s << "] eh palindrome\n";
    }
    else
    {
        cout << "A frase [" << s << "] nao eh palindrome\n";
    }

    return 0;
}