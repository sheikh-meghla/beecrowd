#include <bits/stdc++.h>
using namespace std;

int main() {


    string year;
    bool first = true;

    while (cin >> year) {

        if (first == false)
        {
            cout << '\n';
        }
        first = false;

        int mod4 = 0, mod100 = 0, mod400 = 0, mod15 = 0, mod55 = 0;

        for (char c : year) {
            int d = c - '0';

            mod4 = (mod4 * 10 + d) % 4;
            mod100 = (mod100 * 10 + d) % 100;
            mod400 = (mod400 * 10 + d) % 400;
            mod15 = (mod15 * 10 + d) % 15;
            mod55 = (mod55 * 10 + d) % 55;
        }

        bool leap = false;
        bool huluculu = false;
        bool bulukulu = false;

        if (mod400 == 0 || (mod4 == 0 && mod100 != 0))
        {
            leap = true;
        }

        if (mod15 == 0)
        {
            huluculu = true;
        }

        if (leap == true && mod55 == 0)
        {
            bulukulu = true;
        }

        if (leap == true)
        {
            cout << "This is leap year.\n";
        }

        if (huluculu == true)
        {
            cout << "This is huluculu festival year.\n";
        }

        if (bulukulu == true)
        {
            cout << "This is bulukulu festival year.\n";
        }

        if (leap == false && huluculu == false && bulukulu == false)
        {
            cout << "This is an ordinary year.\n";
        }
    }

    return 0;
}