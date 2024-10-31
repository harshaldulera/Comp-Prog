#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    int maxl = 1;
    int len = 1;

    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]){
            len++;
        } else {
            maxl = max(maxl, len);
            len = 1;
        }
    }
    maxl = max(maxl, len);
    cout << maxl;
    return 0;
}