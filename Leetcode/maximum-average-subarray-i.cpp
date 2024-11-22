#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if(nums.size() == k) {
            return nums[0];
        }

        if(k > n) return -1;

        double windowSum = 0;

        //first window
        for(int i = 0; i < k; i++) {
            windowSum += nums[i];
        }

        double maxi = windowSum;

        for(int i = k; i < n; i++) {
            windowSum += nums[i] - nums[i - k];
            maxi = max(maxi, windowSum);
        }
        return (maxi / 4);
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int k; cin >> k

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    
    Solution obj;
    cout << obj.findMaxAverage(nums, k);
    

    return 0;
}