#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIdx = 0;
        int colIdx = col - 1;

        while(rowIdx < row && colIdx >= 0) {
            int mid_val = matrix[rowIdx][colIdx];
            if(mid_val == target) {
                return true;
            } else if (target > mid_val) {
                colIdx--;
            } else {
                rowIdx;
            }
        } 
        return false;
    }
};

int main () {
    return 0;
}