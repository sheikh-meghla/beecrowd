#include <bits/stdc++.h>
using namespace std;

int main() {

    string vowels, text;

    while (getline(cin, vowels)) {

        if (vowels.empty())
        {
            continue;
        }

        getline(cin, text);

        int count = 0;

        for (int i = 0; i < text.size(); i++) {

            for (int j = 0; j < vowels.size(); j++) {

                if (text[i] == vowels[j]) {
                    count++;
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}