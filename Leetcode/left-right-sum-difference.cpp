class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftSum(nums.size(), 0);
        vector<int> rightSum(nums.size(), 0);
        int n = nums.size();
        vector<int> ans;
        for(int i = 1; i < n; i++) {
            leftSum[i] = leftSum[i - 1] + nums[i - 1];
        }

        for(int i = n - 2; i >= 0; i--) {
            rightSum[i] = rightSum[i + 1] + nums[i + 1];
        }

        for(int i = 0; i < n; i++) {
            ans.push_back(abs(leftSum[i] - rightSum[i]));
        }
        return ans;
    }
};