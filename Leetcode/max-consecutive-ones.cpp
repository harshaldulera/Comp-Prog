#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
            } else {
                count = 0;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int ans = obj.findMaxConsecutiveOnes(nums);

    cout << ans << endl;

    return 0;
}