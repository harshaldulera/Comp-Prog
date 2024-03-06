#include<bits/stdc++.h>
using namespace std;

int main () {
    int testcase;
    cin >> testcase;
    while(testcase--){
        int n, m, matches;
        cin >> n >> m;
        matches = n - 1;
        if(matches < m) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}