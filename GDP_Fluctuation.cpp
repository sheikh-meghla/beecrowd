#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double f1, f2;
    cin >> f1 >> f2;

    double ans = ((1.0 + f1 / 100.0) * (1.0 + f2 / 100.0) - 1.0) * 100.0;

    cout << fixed << setprecision(6) << ans << '\n';

    return 0;
}