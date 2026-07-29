#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;

    while (n--) {
        string s;
        cin >> s;

        bool lose = false;

        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == 'C' && s[i + 1] == 'D') {
                lose = true;
                break;
            }
        }

        if (lose == false)
        {
            ans++;
        }
    }

    cout << ans << '\n';

    return 0;
}