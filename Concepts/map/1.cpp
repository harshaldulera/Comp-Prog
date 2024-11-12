#include <bits/stdc++.h>
using namespace std;

int main () {
    string s; cin >> s;
    unordered_map<char, int> umap;
    for(auto& i : s){
        umap[i]++;
    }
    for(auto& ch : s) {
        if(umap[ch] == 1) {
            cout << ch;
            break;
        }
    }
    return 0;
}