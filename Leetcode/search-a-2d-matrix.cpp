#include <bits/stdc++.h>
using namespace std;

/*
class Solution {
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        vector<int> res;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++) {
                res.push_back(matrix[i][j]);
            }
        }

        int start = 0;
        int end = res.size() - 1;
        while(start <= end) {
            int mid = start + (end - start) / 2;
            if (res[mid] == target) {
                return true;
            } else if (res[mid] < target) {
                start = mid + 1;
            } else{
                end = mid - 1;
            }
        }
        return false;
    }
};

*/


class Solution {
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = (row * col) - 1;
        int mid = start + (end - start) / 2;

        while(start <= end) {
            int mid_val = matrix[mid / col][mid % col]''
            if(mid_val == target) {
                return true;
            } else if (element > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return false;
    }
};