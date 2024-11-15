#include <bits/stdc++.h>
using namespace std;

int lec(int a, int b) {
    
}

int gcd(int a, int b) {
    if(a == 0) 
    cout << b << endl;
    if(b == 0) 
    cout << a << endl;

    while(a != b) {
        if(a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }

    cout << a;

    return 0;
}

int main () {
    int a; cin >> a;
    int b; cin >> b;


}