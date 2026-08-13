#include<bits/stdc++.h>

using namespace std;

int main() {

    string sentence;
    cin >> sentence;

    remove(sentence.begin(),sentence.end(),',');

    cout << sentence << endl;
    
    
    return 0;
}