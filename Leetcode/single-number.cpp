class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> umap;
        int n = nums.size();
        for(auto& i : nums) {
            umap[i]++;
        }
        for(auto& i : nums){
            if(umap[i] == 1){
                return i;
                break;
            }
        }
        return 0;
    }
};