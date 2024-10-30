#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid){
    int count = 1;
    int last = stalls[0];

    for(int i = 0; i < stalls.size(); i++) {
        if(stalls[i] - last >= mid) {
            count++;
            if(count == k) {
                return true;
            }
            last = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(), stalls.end());

    int start = 0;
    int maxi = -1;
    int ans = -1;
    for(int i = 0; i < stalls.size(); i++) {
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;
    int mid = start + (end - start) / 2;

    while(start <= end ) {
        if(isPossible(stalls, k, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
