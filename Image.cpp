#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;

    while (cin >> n >> m) {

        if (n == 0 && m == 0)
        {
            break;
        }

        vector<string> image(n);

        for (int i = 0; i < n; i++) {
            cin >> image[i];
        }

        int A, B;
        cin >> A >> B;

        int row = A / n;
        int col = B / m;

        for (int i = 0; i < n; i++) {

            string newRow = "";

            for (int j = 0; j < m; j++) {

                for (int k = 0; k < col; k++) {
                    newRow += image[i][j];
                }
            }

            for (int k = 0; k < row; k++) {
                cout << newRow << '\n';
            }
        }

        cout << '\n';
    }

    return 0;
}