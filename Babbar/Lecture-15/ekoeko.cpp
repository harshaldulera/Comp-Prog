#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int>& cows, int n, long long m, int mid) {
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        if(cows[i] > mid) {
            sum += (cows[i] - mid);
        }
    }
    if(sum >= m) {
        return true;
    } 
    return false;
}

int binarySearch(vector<int>& cows, int n, long long m){
    int start = 0;
    int end = cows[n - 1];
    int ans = 0;
    int mid = start + (end - start) / 2;
    while(start <= end) {
        if(isPossible(cows, n, m, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start ) / 2;
    }
    return ans;
}

int main () {
    int n; cin >> n;
    long long m; cin >> m;
    vector<int> cows(n);
    for(int i = 0; i < n; i++) {
        cin >> cows[i];
    }
    sort(cows.begin(), cows.end());

    cout << binarySearch(cows, n, m) << endl; 
    // cout << answer << endl;
    // return 0;
}