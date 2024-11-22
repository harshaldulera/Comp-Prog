#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

int fib(int n, vector<int> &dp) {
    if(n <= 1) {
        return n;
    }

    if(dp[n] != -1) {
        return dp[n];
    }   
    
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> dp(n + 1);

    for(int i = 0; i <= n; i++) {
        dp[i] = -1;
    }

    cout << fib(n, dp) << endl;

    return 0;
}