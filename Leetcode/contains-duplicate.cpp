/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1])
            return true;
        }
        return false;
    }
};
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;
        for(int num : nums) {
            if(seen[num] >= 1){
                return true;
            }
            seen[num]++;
        }
        return false;
    }
};