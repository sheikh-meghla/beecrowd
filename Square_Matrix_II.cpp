#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    while (cin >> n) {

        if (n == 0)
        {
            break;
        }

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < n; j++) {

                int value = abs(i - j) + 1;

                cout << setw(3) << value;

                if (j != n - 1)
                {
                    cout << " ";
                }
            }

            cout << "\n";
        }

        cout << "\n";
    }

    return 0;
}
