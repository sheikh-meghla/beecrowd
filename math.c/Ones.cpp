#include<bits/stdc++.h>

using namespace std;
int main()
{
    int x;
    while (cin >> x)
    {
        int remainder = 1 % x;
        int count = 1;
        while (remainder != 0)
        {
            remainder = (remainder * 10 + 1) % x;
            count++;
        }
        cout << count << endl;

    }
    
} 
