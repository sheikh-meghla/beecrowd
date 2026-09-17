#include <bits/stdc++.h>
using namespace std;

int main() {

    string l;

    string s = "";
    int maxLength = 0;

    while (getline(cin, l)) {

        if (l == "0")
        {
            break;
        }

        stringstream ss(l);

        string word;
        bool first = true;

        while (ss >> word) {

            if (!first)
            {
                cout << "-";
            }

            cout << word.length();

            first = false;

            if (word.length() >= maxLength) {
                maxLength = word.length();
                s = word;
            }
        }

        cout << "\n";
    }

    cout << "\n";
    cout << "The biggest word: " << s << "\n";

    return 0;
}
