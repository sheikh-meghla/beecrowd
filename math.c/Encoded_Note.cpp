#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        cout << char('a' + n - 1) << '\n';
    }
    return 0;
}