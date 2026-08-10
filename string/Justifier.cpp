#include<bits/stdc++.h>

using namespace std;

int main() {
    bool flag = true;
    while (1)
    {
        int n;
        cin >> n;
        if (n==0)
        {
            break;
        }

        int max = INT_MIN;

        vector<string> name_list;

        int t = n;

        while (t--)
        {
            string name;
            cin >> name;
            int len = name.size();

            if(len > max) {
                max = len;
            }
            name_list.push_back(name);

        }
        if(!flag){
            cout << endl;
        }
        flag = false;

        for(int i = 0; i < n; i++) {
            int name_len = name_list[i].size();
            int space = max - name_len;

            cout << string(space, ' ') <<  name_list[i] << endl;
            
        }
        
        
    }
    
    return 0;
}