#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& price, int n) {
    if(n == 0) {
        return 0;
    }
    int maxi = price[0];
    int mini = INT_MAX;
    int index = 0;

    for(int i = 1; i < n; i++) {
        maxi = max(maxi, price[i]);
        index = i;
    }

    for(int i = index; i < n; i++) {
        mini = min(mini, price[i]);
    }

    return maxi - mini;

}

int main () {
    int n; cin >> n;
    vector<int> price(n);
    for(int i = 0; i < n; i++) {
        cin >> price[i];
    }

    cout << solve(price, n);
}