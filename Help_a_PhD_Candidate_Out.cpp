#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;

    while (N--) {
        string s;
        cin >> s;

        if (s == "P=NP") {
            cout << "skipped\n";
        }
        else {
            int pos = s.find('+');

            int a = stoi(s.substr(0, pos));
            int b = stoi(s.substr(pos + 1));

            cout << a + b << '\n';
        }
    }

    return 0;
}