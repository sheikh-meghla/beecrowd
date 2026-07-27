#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b;
    int carry = 0;
    int count = 0;
    while (true)
    {
        cin >> a >> b;

        if (a == 0 && b == 0)
            break;

        int carry = 0;
        int count = 0;

        while (a > 0 || b > 0)
        {
            int digit1 = a % 10;
            int digit2 = b % 10;
            int sum = digit1 + digit2 + carry;
            if (sum >= 10)
            {
                count++;
                carry = 1;
            }
            else
            {
                carry = 0;
            }

            a /= 10;
            b /= 10;
        }
        if(count == 1)
            cout << count << " "<< "carry operation." << endl;

        else if (count > 1)
        {
            cout << count << " "<< "carry operations." << endl;
        }
            
        else{
            cout << "No carry operation." << endl;
    }
}


    
}
