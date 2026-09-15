#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {

        int s = 0;
        int p = 0;

        int wrong[26] = {0};
        bool solved[26] = {false};

        for (int i = 0; i < n; i++) {

            char problem;
            int time;
            string s1;

            cin >> problem >> time >> s1;

            int idx = problem - 'A';

            if (s1 == "incorrect") {
                wrong[idx]++;
            }
            else if (s1 == "correct") {

                if (!solved[idx]) {
                    solved[idx] = true;

                    s++;

                    p += time + wrong[idx] * 20;
                }
            }
        }

        cout << s << " " << p << endl;
    }

    return 0;
}