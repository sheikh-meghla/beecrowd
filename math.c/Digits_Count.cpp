#include <iostream>
using namespace std;

int main() {

    while (true) {
        int freq[10] = {0};

        int a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        for (int i = a; i <= b; i++) {
            int x = i;

            while (x > 0) {
                int reminder = x % 10;
                freq[reminder]++;
                x /= 10;
            }
        }

        for (int i = 0; i < 10; i++) {
            cout << freq[i] << " ";
        }
        cout << endl;
    }

    return 0;
}