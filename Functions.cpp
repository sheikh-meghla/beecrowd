#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin >> x >> y;

        long long ans_R = (3*x)*(3*x) + y*y;
        long long ans_B = 2*(x*x) + (5*y)*(5*y);
        long long ans_C = -100 * x + y * y * y;


        if (ans_R > ans_B && ans_R > ans_C)
        {
            cout << "Rafael ganhou\n";
        }
        else if (ans_B > ans_R && ans_B > ans_C)
        {
            cout << "Beto ganhou\n";
        }
        else
        {
            cout << "Carlos ganhou\n";
        }
        
        
    }
    
    return 0;
}