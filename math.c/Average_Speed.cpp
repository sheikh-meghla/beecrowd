#include <bits/stdc++.h>
using namespace std;

int main() {

    string line;

    double distance = 0.0;
    int speed = 0;
    int lastTime = 0;

    while (getline(cin, line)) {

        stringstream ss(line);

        string t;
        ss >> t;

        int h, m, s;
        sscanf(t.c_str(), "%d:%d:%d", &h, &m, &s);

        int currentTime = h * 3600 + m * 60 + s;

        distance += speed * (currentTime - lastTime) / 3600.0;

        lastTime = currentTime;

        int newSpeed;

        if (ss >> newSpeed) {
        
            speed = newSpeed;
        
        } else {
            cout << t << " ";
            cout << fixed << setprecision(2) << distance << " km\n";
        }
    }

    return 0;
}