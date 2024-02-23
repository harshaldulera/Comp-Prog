#include <bits/stdc++.h>
using namespace std;

long long cellRun(int n, m, xo, yo, l){
    unordered_map<long long int, long long int> visisted;
    visisted.insert((long long)xo * (m+1) + yo);

    for(int i = 0; i < l; i++){
        unordered_map<long long int, long long int> newVisisted;
        for(long long cell : visisted){
            int x = cell / (m+1);
            int y = cell % (m+1);

            if(x - l >= 1) newVisisted.insert(((long long)(x-l) * (m+1)) + y);
            if(x + l <= n) newVisisted.insert(((long long)(x+l) * (m+1)) + y);
            if(y - l >= 1) newVisisted.insert(((long long)x * (m+1)) + y-l);
            if(y + l <= m) newVisisted.insert(((long long)x * (m+1)) + y+l);
        }

        visisted.insert(newVisisted.begin(), newVisisted.end());
    }
    
}

int main() {
	int t;
    cin >> t;
    while(t--){
        int n, m, xo, y, l;
        cin >> n >> m >> x0 >> y0 >> l;
        cout << cellRun(n, m, x0, y0, l) << endl;
    }
    return 0;

}
