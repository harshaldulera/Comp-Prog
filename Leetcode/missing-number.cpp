class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR = 0;
        int size = nums.size();
        for(int i = 0; i < size; i++) {
            XOR ^= nums[i];
            XOR ^= i;
        }
        XOR ^= size;
        return XOR;
    }
};