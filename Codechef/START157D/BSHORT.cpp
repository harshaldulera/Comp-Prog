#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; ++i){
            if (s[i] == '1') {
                cnt++;
            }
        }
        if (cnt == 0) {
            cout << n << endl;
            continue;
        }
        if (cnt % 2 == 1) {
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }
    }
}