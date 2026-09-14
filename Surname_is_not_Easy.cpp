#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool Vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {

    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        string s;
        cin >> s;

        int count = 0;
        bool flag = false;

        for (char c : s) {
            if (Vowel(c)) {
                count = 0;
            } else {
                count++;
                if (count >= 3) {
                    flag = true;
                    break;
                }
            }
        }

        if (flag) {
            cout << s << " nao eh facil\n";
        } else {
            cout << s << " eh facil\n";
        }
    }

    return 0;
}