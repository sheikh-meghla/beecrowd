#include <iostream>
using namespace std;

int main() {

    int N;

    while (cin >> N) {
        for (int i = 1; i <= N; i++) {
            int x;
            cin >> x;
            cout << "resposta " << i << ": " << x << '\n';
        }
    }

    return 0;
}