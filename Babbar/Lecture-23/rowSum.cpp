#include <bits/stdc++.h>
using namespace std;

/*
vector<int> rowSum(vector<vector<int>>& matrix) {
    vector<int > res;
    int row = matrix.size();
    int col = matrix[0].size();
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += matrix[i][j];
        }
        res.push_back(sum);
    }
    return res;
}
*/

int largestRowSum(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int largest = 0;
    int idx = -1;
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += matrix[i][j];
        }
        idx = row - 1;
    }
    return idx;
}

int main () {
    int row; cin >> row;
    int col; cin >> col;
    vector<vector<int>> matrix(row, vector<int>(col));
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    // vector<int> result = rowSum(matrix);
    
    // for(auto& sum : result){
    //     cout << sum << " ";
    // }

    cout << largestRowSum(matrix) << endl;
    return 0;
}