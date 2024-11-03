#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr, int start, int end) {
        while(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        reverseArray(nums, 0, nums.size() - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, nums.size() - 1);
    }
};