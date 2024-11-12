class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if (nums1[i] == nums2[j]) {
                    nums1.erase(nums1.begin() + i);
                    nums2.erase(nums2.begin() + j);
                    i--;
                    break;                  
                }

            }

        }
        vector<vector<int>> res;
        res.push_back(nums1);
        res.push_back(nums2);
        return res;
    }
};