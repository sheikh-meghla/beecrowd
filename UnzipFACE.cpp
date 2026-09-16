#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    while (cin >> t && t != 0)
    {
        while (t--)
        {
            string s;
            cin >> s;

            int even = 0;
            int odd = 0;

            for(int i = 0; i < s.size(); i++){

                if (i % 2 == 0)
                {
                    even += (s[i] - '0');
                }
                else
                {
                    odd += (s[i] - '0');
                }
            }

            int sum = 0;
            int sum1 = 0;
            int r;

            while (even != 0)
            {
                r = even % 10;
                sum += r;
                even = even / 10;
            }
            while (odd != 0)
            {
                r = odd % 10;
                sum1 += r;
                odd = odd / 10;
            }

            int ans = sum + sum1;
            cout << ans << endl;

        }
    }
    
    return 0;
}