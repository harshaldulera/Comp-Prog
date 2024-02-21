#include <bits/stdc++.h>
using namespace std;

int main () {
    int hours;
    cin >> hours;
    if (hours < 8) {
        cout << "LESS" << endl;
    } else if (hours == 8) {
        cout << "PERFECT" << endl;
    } else {
        cout << "MORE" << endl;
    }
    return 0;
}