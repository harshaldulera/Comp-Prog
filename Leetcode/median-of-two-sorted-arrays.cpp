class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size() - 1;
        int n = nums2.size() - 1;
        int p = m + n - 1;
        while(m >= 0 && n >= 0){
            if(nums1[m] > nums2[n]){
                nums1[p] = nums1[m];
                m--;
            } else {
                nums1[p] = nums2[n];
                n--;
            }
            p--;
        }
        while(n >= 0) {
            nums1[p] = nums2[n];
            n--;
            p--;
        }
        if((m + n + 2) % 2 == 0){
            return (nums1[(m + n + 2) / 2] + nums1[(m + n + 2) / 2 - 1]) / 2.0;
        } else {
            return nums1[(m + n + 2) / 2];
        }
    }
};