#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = n % 10;
    int ans = (n / 10) % 10;
    int ans1 = n / 100;

    int reversed = x * 100 + ans * 10 + ans1;

    cout << "Invertido = " << reversed << "\n";

    return 0;
}