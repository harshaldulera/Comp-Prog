#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> leftSum(n + 1, 0);
        int max = leftSum[0];
        for(int i = 1; i < n+1; i++) {
            leftSum[i] = leftSum[i + 1] + gain[i + 1];
            max = (max, leftSum[i]);
        }
        return max;
    }
};

int main () {
    vector<int> gain;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> gain[i];
    }


    Solution obj;
    cout << obj.largestAltitude(gain) << endl;


    return 0;
}