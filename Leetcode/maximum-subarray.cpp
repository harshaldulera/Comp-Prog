class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        long long maxi = LONG_MIN;
        long long sum = 0;
        //if(nums.size() < 2) return 0;

        // int maxSum = nums[0] + nums[1];
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if(sum > maxi) {
                maxi = sum;
            }

            if(sum < 0) {
                sum = 0;
            }
        }
        return maxi;  
    }
};