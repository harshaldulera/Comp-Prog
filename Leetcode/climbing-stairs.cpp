#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Solution {
public:
    int solve(vector<int> &dp, int n) {
        if(n == 0) return 1;
        if(n < 0) return 0;

        if(dp[n] != -1) return dp[n];

        dp[n] = solve(dp, n - 1) + solve(dp, n - 2);
        return dp[n];
    }
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return solve(dp, n);
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    Solution obj;
    cout << obj.climbStairs(n) << endl;  

    return 0;
}