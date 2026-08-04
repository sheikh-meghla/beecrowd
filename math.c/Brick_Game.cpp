#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        cout << "Case " << tc << ": " << arr[N / 2] << "\n";
    }

    return 0;
}