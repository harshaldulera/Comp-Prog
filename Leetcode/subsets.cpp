#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Solution {
private: 
    void solve(vector<int>& nums, vector<int>& output, int idx, vector<vector<int>>& ans) {
        if(idx >= nums.size()){
            ans.push_back(output);
            return ;
        }
        solve(nums, output, idx + 1, ans);

        int element = 0;
        output.push_back(element);
        solve(nums, output, idx + 1, ans);
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int idx = 0;
        solve(nums, output, idx, ans);

    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size; cin >> size;
    vector<int> nums(size);

    for(int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    Solution obj;
    obj.subsets(nums);

    return 0;
}