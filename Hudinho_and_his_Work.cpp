#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    vector<string> a[26];

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;

        int idx = name[0] - 'A';

        a[idx].push_back(name);
    }

    for (int i = 0; i < 26; i++) {

        for (string name : a[i]) {
            cout << name << '\n';
        }
    }

    return 0;
}