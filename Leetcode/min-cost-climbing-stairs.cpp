#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Solution {
public:
    int solve(vector<int>& cost, int n) {
        vector<int> dp(n + 1, -1);
        
        dp[0] = cost[0];
        dp[1] = cost[1];

        // if(dp[n] != -1) {
        //     return dp[n];
        // }

        for(int i = 2; i < n; i++) {
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        }

        return min(dp[n - 1], dp[n - 2]);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        // vector<int> dp(n + 1, -1);

        int ans = solve(cost, n);

        return ans;
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<int> cost(n);
    for(int i = 0; i < n; i++) {
        cin >> cost[i];
    }

    Solution obj;
    cout << obj.minCostClimbingStairs(cost);

    return 0;
}