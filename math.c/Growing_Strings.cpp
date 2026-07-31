#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    

    while (cin >> n && n != 0)
    {
        string s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int counter = 0;
        int counter1 = 0;
        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                if (i == j) 
                {
                    counter1++;
                    continue;
                }

                if (s[j].find(s[i]) != string::npos) {
                    counter++;
                   
                }
            }
}
    cout << counter - counter1 << endl;
    }
    
    return 0;
}