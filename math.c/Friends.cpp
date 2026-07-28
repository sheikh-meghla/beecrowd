#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

unordered_map<int, string> memo;

string get_power_of_two_minus_three(int exp) {
    if (memo.count(exp)) {
        return memo[exp];
    }

    long long BASE = 1000000000LL;
    vector<long long> digits = {1};

    for (int i = 0; i < exp; ++i) {
        long long carry = 0;
        for (size_t j = 0; j < digits.size(); ++j) {
            long long cur = digits[j] * 2 + carry;
            digits[j] = cur % BASE;
            carry = cur / BASE;
        }
        if (carry > 0) {
            digits.push_back(carry);
        }
    }

    digits[0] -= 3;
    for (size_t i = 0; i < digits.size(); ++i) {
        if (digits[i] < 0) {
            digits[i] += BASE;
            digits[i + 1] -= 1;
        } else {
            break;
        }
    }

    string res = to_string(digits.back());
    for (int i = (int)digits.size() - 2; i >= 0; --i) {
        string block = to_string(digits[i]);
        res += string(9 - block.length(), '0') + block;
    }

    return memo[exp] = res;
}

int main() {


    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long m, n;
        cin >> m >> n;

        if (m == 0) {
            cout << n + 1 << "\n";
        } else if (m == 1) {
            cout << n + 2 << "\n";
        } else if (m == 2) {
            cout << 2 * n + 3 << "\n";
        } else if (m == 3) {
            cout << get_power_of_two_minus_three(n + 3) << "\n";
        } else if (m == 4) {
            if (n == 0) {
                cout << 13 << "\n";
            } else if (n == 1) {
                cout << 65533 << "\n";
            } else if (n == 2) {
                cout << get_power_of_two_minus_three(65536) << "\n";
            }
        }
    }

    return 0;
}