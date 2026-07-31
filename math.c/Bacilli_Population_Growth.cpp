#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

vector<int> fib(1500);

void precompute() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 1500; ++i) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % 1000;
    }
}

void solve() {
    string K;
    cin >> K;

    int rem = 0;
    for (char digit : K) {
        rem = (rem * 10 + (digit - '0')) % 1500;
    }

    cout << setfill('0') << setw(3) << fib[rem] << "\n";
}

int main() {


    precompute();

    int T;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    }

    return 0;
}