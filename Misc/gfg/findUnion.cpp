#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> unionSet;
        for(int i : a) unionSet.insert(i);
        for(int j :  b) unionSet.insert(j);
        return vector<int> (unionSet.begin(), unionSet.end());
    }
};

// a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
// output = 1 2 3 4 5 6 7

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ; cin >> n;
    int m; cin >> m;

    vector<int> a(n);
    vector<int> b(m);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    Solution obj;
    obj.findUnion(a, b);
    // findUnion(a, b);

    //return 0;
}

