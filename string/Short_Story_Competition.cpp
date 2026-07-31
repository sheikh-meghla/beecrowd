#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, L, C;

    while (cin >> N >> L >> C) {

        int lines = 1;
        int current = 0;

        for (int i = 0; i < N; i++) {
            string word;
            cin >> word;

            if (current == 0) {
                current = word.size();
            }
            else if (current + 1 + word.size() <= C) {
                current += 1 + word.size();
            }
            else {
                lines++;
                current = word.size();
            }
        }

        int pages = (lines + L - 1) / L;

        cout << pages << endl;
    }

    return 0;
}