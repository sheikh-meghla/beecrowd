#include <iostream>
using namespace std;
int main()
{
    long long int s1,s2;
    while (cin >> s1 >> s2)
    {
        long long int mx = max(s1, s2);
        long long int mn = min(s1, s2);

        long long int ans = mx - mn;
        cout << ans<<endl;
    }
    
    return 0;
} 
