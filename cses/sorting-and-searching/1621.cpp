#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t; cin >> t;
    unordered_map<long long, long long> umap;
    for(int i = 1; i <= t; i++) {
        long long int num; cin >> num;
        umap[num]++;
    }
    cout << umap.size() << endl;
    return 0;
}   