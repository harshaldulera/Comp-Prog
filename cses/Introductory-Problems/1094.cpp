#include <bits/stdc++.h>
using namespace std;

long long moves(const vector<int>& arr) {
    long long moves = 0;
    int n = arr.size();
    vector<int> modArr = arr;
    for(int i = 1; i < n; i++) {
        if(modArr[i] < modArr[i - 1]){
            moves += modArr[i - 1] - modArr[i];
            modArr[i] = modArr[i - 1];
        }
    }
    return moves;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << moves(arr) << endl;

    return 0;
}