#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;

        if (find(v.begin(), v.end(), x) == v.end()) {
            v.push_back(x);
        }
    }

    cout <<"Falta(m) "<< 151 - v.size() <<" pomekon(s)."<< endl;

    return 0;
}