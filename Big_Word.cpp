#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    while (cin >> s) {
        if (s.length() >= 10)
            {
                cout << "palavrao\n";
            }
        else
        {
            cout << "palavrinha\n";
        }
    }

    return 0;
}