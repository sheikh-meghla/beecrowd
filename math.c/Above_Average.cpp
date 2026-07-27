#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr [n] = {0};
        
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        float avg=0.0;
        int sum = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        avg = (float) sum / n;

        for (int i = 0; i < n; i++)
        {
            if(arr[i] > avg){
                count++;
            }

        }
        float p = (float) count/n * 100.0;
        cout << fixed << setprecision(3) << p << "%" <<endl;
        
        
    }
    
} 
