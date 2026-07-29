#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = n * n;
    int white = (total + 1) / 2;
    int black = total / 2;

    cout << white << " casas brancas e " << black << " casas pretas\n";

    return 0;
}