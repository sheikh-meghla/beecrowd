#include <bits/stdc++.h>
using namespace std;

int main() {

    string tag, num, text;

    while (getline(cin, tag)) {
        getline(cin, num);
        getline(cin, text);

        bool inside = false;

        for (int i = 0; i < (int)text.size(); i++) {

            if (text[i] == '<') {
                inside = true;
                cout << '<';
                continue;
            }

            if (text[i] == '>') {
                inside = false;
                cout << '>';
                continue;
            }

            if (inside) {
                bool match = true;

                if (i + tag.size() <= text.size()) {
                    for (int j = 0; j < (int)tag.size(); j++) {
                        if (tolower(text[i + j]) != tolower(tag[j]))
                        {
                            match = false;
                            break;
                        }
                    }
                } else {
                    match = false;
                }

                if (match == true) {
                    cout << num;
                    i += tag.size() - 1;
                } 
                else {
                    cout << text[i];
                }
            } else {
                cout << text[i];
            }
        }

        cout << '\n';
    }

    return 0;
}