#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        for (int star = 1; star <= n; star += 2)
        {
            for (int space = 0; space < (n - star) / 2; space++)
            {
                cout << " ";
            }

            for (int j = 0; j < star; j++)
            {
                cout << "*";
            }

            cout << endl;
        }

        for (int space = 0; space < (n - 1) / 2; space++)
        {
            cout << " ";
        }

        cout << "*" << endl;

        for (int space = 0; space < (n - 3) / 2; space++)
        {
            cout << " ";
        }

        cout << "***" << endl;

        cout << endl;
    }

    return 0;
}