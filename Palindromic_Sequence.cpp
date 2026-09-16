#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, d;

    while (cin >> n >> d) {

        if (n == 0 && d == 0)
        {
            break;
        }

        string s;
        cin >> s;

        int ans = 1;

        for (int p = 1; p <= n; p++) {
            for (int i = 0; i + p <= n; i++) {

                bool flag = true;

                for (int j = 0; j < p / 2; j++) {
                    if (s[i + j] != s[i + p - 1 - j]) {
                        flag = false;
                        break;
                    }
                }

                if (!flag)
                {
                    continue;
                }

                int count = 1;
                int pos = i + d;

                while (pos + p <= n) {
                    bool flag_1 = true;
                    for (int j = 0; j < p / 2; j++) {
                        if (s[pos + j] != s[pos + p - 1 - j]) {
                            flag_1 = false;
                            break;
                        }
                    }

                    if (!flag_1)
                    {
                        break;
                    }

                    count++;
                    pos += d;
                }

                ans = max(ans, count * p);
            }
        }

        cout << ans << '\n';
    }

    return 0;
}