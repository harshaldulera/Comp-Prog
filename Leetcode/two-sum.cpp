#include <bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        for(int i = 0; i < size - 1; i++) {
            for(int j = i + 1; j < size; j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
*/

class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if(umap.count(complement)){
                return {umap[complement], i};
            }
            umap[nums[i]] = i;
        }
        return {};
    }
};