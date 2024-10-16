#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
	    int n; cin >> n;
	    vector<int> position(n);
	    for(int i = 0; i < n; i++) {
	        cin >> position[i];
	    }
	    int wealth = position[n - 1];
	    int status = n;
	    for(int i = n - 2; i >= 0; --i) {
	        if(position[i] <= wealth / 2) {
	            status--;
	        } else {
	            break;
	        }
	    }
	    cout << status << endl;
	}
	return 0;
}
