#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {
  vector<vector<int>> ans;

  for(int i = 0; i < arr.size(); i++) {
    for(int j = i + 1; j < arr.size(); j++){
      if(arr[i] + arr[j] == s) {
        vector<int> temp;
        temp.emplace_back(min(arr[i], arr[j]));
        temp.emplace_back(max(arr[i], arr[j]));
        ans.emplace_back(temp);
      }
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}