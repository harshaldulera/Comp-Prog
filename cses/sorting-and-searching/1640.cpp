#include <bits/stdc++.h>
using namespace std;

int main () {
    long long int t; cin >> t;
    long long int target; cin >> target;
    vector<long long> nums(t);
    for(int i = 0; i < t; i++) {
        cin >> nums[i];
    }

    bool done = false;

    unordered_map<int, int> umap;
    for(int i = 0; i < t; i++){
        int comp  = target - nums[i];
        if(umap.count(comp)){
            cout << umap[comp] + 1 << " " << i + 1;
            done = true;
            break;
        }
        umap[nums[i]] = i;
    }
    
    if (done == false) {
        cout << "IMPOSSIBLE" << endl;
    }

    // for(int i = 0; i < t - 1; i++) {
    //     for(int j = i + 1; j < t; j++){
    //         if(nums[i] + nums[j] == target) {
    //             cout << i + 1 << " " << j + 1 << endl;
    //             done = true;
    //             break;
    //         }
    //     }
    // }
    // if (done == false) {
    //     cout << "IMPOSSIBLE" << endl;
    // }
    return 0;
}