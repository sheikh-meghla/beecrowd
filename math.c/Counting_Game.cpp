#include<bits/stdc++.h>

using namespace std;
int main() {

    int n,m,k;
    while (true)
    {
        cin >> n >> m >> k;
        if (n == 0 && m == 0 && k == 0)
        {
            break;
        }
        
        int i = 0;
        int counter = 1;
        int dir = 1;

        vector<int> person(n, 0);
        
        while(true) {
            
            if(counter % 7 == 0 || counter % 10 == 7) {
                person[i]++;
                if(person[i] == k && i==m-1) {
                    cout << counter <<endl;
                    break;
                }
            }
            

            if(i==n-1) {
                dir = -1;
            }else if( i==0 ) {
                dir = 1;
            }
            i += dir;
            counter++;


        }
        
        
        
        
    }
    
    
    return 0;
}