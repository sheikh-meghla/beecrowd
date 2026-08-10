#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--)
    {

        cin.ignore();
        string s;
        getline(cin,s);
        stringstream ss(s);

        string word;

        while(ss >> word) {
            cout << word << endl;
        }

        


        
        // cout << s << endl;
    }
    
    
    return 0;
}