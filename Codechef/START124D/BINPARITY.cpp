#include<bits/stdc++.h>
using namespace std;

int main () {

    int testcase;
    cin >> testcase;
    while(testcase--){
        int n;
        cin >> n;
        int count = 0;
        while(n > 0) {
            if(n % 2 == 1) {
                count++;
            }
            n /= 2;
        }
        if(count % 2 == 0) {
            cout << "EVEN" << endl;
        } else {
            cout << "ODD" << endl;
        }
    }

    return 0;
}