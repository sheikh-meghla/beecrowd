#include<iostream>
#include<string>
#include <iomanip>
#include<math.h>
using namespace std;
int main()
{
    double PI = 3.14159;
    double G = 9.80665;
    double h;
    while (cin >> h){

        int p1,p2;
        cin >> p1 >> p2;

        int n;
        cin >> n;

        while (n--)
        {
            double angle,v;
            cin >> angle >> v;

            double theta = angle * PI / 180.0;

            double vx = v * cos(theta);
            double vy = v * sin(theta);
            double t = (vy + sqrt(vy * vy + 2.0 * G * h)) / G;
            double x = vx * t;
            cout << fixed << setprecision(5) << x;
            if (x >= p1 && x <= p2)
            {
                cout << " -> DUCK\n";
            }
            else
            {
                cout << " -> NUCK\n";
            }
            

        }
        

    }


    return 0;
}

