#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrayGCD(const vector<int>& arr) {
        if(arr.empty()) return 0;
        return accumulate(arr.begin(), arr.end(), arr[0], gcd<int, int>);
    }

    long long arrayLCM(const vector<int>& arr) {
        if(arr.empty()) return 0;
        long long lcm = arr[0];
        for(int i = 1; i < arr.size(); ++i) {
            lcm = (lcm * arr[i] / gcd(lcm, (long long)arr[i]));
        }
        return lcm;
    }

    long long maxScore(vector<int>& nums) {
        int gcdAll = arrayGCD(nums);
        long long lcmAll = arrayLCM(nums);
        long long maxScore = gcdAll * lcmAll;

        for(int i = 0; i < nums.size(); ++i) {
            vector<int> numsCopy = nums;
            numsCopy.erase(numsCopy.begin() + i);

            int gcdwI = arrayGCD(numsCopy);
            long long lcmwI = arrayLCM(numsCopy);

            maxScore = max(maxScore, gcdwI * lcmwI);
        }
        return maxScore;
    }

};

int main () {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    Solution solution;
    cout << solution.maxScore(nums) << endl;

    return 0;
}