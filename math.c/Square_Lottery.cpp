#include <iostream>
#include <iomanip>

using namespace std;

int main() {


    long long N;
    double P;

    while (cin >> N >> P && (N != 0 || P != 0.0)) {
        long long N2 = N * N;
        
        double combinations = (double)(N2 - 2) * (N2 - 3) / 2.0;
        double prize = combinations * (P / 100.0);

        cout << fixed << setprecision(2) << prize << "\n";
    }

    return 0;
}