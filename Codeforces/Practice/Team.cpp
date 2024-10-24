#include <bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;
    int p, v, te;
    int cnt = 0;
    while(t--) {
        // int team = 3;
        cin >> p >> v >> te;
        if(p + v + te >= 2) {
            cnt += 1;
        }

    } 
    cout << cnt << endl;
    return 0;
}