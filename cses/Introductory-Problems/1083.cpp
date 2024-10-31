#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& find, int t){
    int XOR = 0;
    for(int i = 0; i < t - 1; i++) {
        XOR ^= find[i];
        XOR ^= (i + 1);
    }
    XOR ^= t;
    return XOR;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    vector<int> find(t - 1);
    for(int i = 0; i < t - 1; i++){
        cin >> find[i];
    }
    cout << solve(find, t) << endl;
    return 0;
}