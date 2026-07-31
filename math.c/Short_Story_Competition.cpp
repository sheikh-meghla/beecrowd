#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L, C;

    while (cin >> N >> L >> C) {

        int lines = 1;
        int currentLength = 0;

        for (int i = 0; i < N; i++) {
            string word;
            cin >> word;

            if (currentLength == 0) {
                currentLength = word.length();
            }
            else if (currentLength + 1 + word.length() <= C) {
                currentLength += 1 + word.length();
            }
            else {
                lines++;
                currentLength = word.length();
            }
        }

        int pages = (lines + L - 1) / L;
        cout << pages << endl;
    }

    return 0;
}