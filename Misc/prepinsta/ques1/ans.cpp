#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& price, int n) {
    int loss = 0;
    int maxPrice = price[0];

    for(int i = 1; i < n; i++) {
        maxPrice = max(maxPrice, price[i]);
        int floss = maxPrice - price[i];
        loss = max(loss, floss);
    } 
    return loss;
}

int main () {
    int n; cin >> n;
    vector<int> price(n);
    for(int i = 0; i < n; i++) {
        cin >> price[i];
    }

    cout << solve(price, n);
}