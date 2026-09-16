#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while ( t--)
    {
        string a,b;
        cin >> a >> b;

        int ans = 0;

        for(int i = 0; i < a.size(); i++){
            if (a[i] <= b[i])
            {
                ans += b[i] - a[i];
            }
            else{
                ans += ('z' - a[i] + 1) + (b[i] - 'a');
            }
                
        }
        cout << ans << endl;
    }
    
    return 0;
}