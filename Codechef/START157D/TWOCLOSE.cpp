#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int size;
	    cin >> size;
	    vector<int> ans(size + 1);
	    
	    //if(size == 4) 
	    
	    
	    for(int i = 0; i <= size; i++) {
	        cin >> ans[i];
	    }
	    
	    int last = ans[size];
	    
	    /*
	    for(int i = 0; i < size; i++) {
	        if(ans[i] <= 2*last) {
	            swap(ans[i], ans[size]);
	            last = ans[size];
	        }
	    }
	    */
	    
	    sort(ans.begin(), ans.end());
	    for(int i = 0; i < size + 1; i++) {
	        if(ans[i] <= 2*last && ans[i] > last) {
	            last = ans[i];
	        }
	    }
	    
	    int sum = 0;
	    bool exclude = false;
	    for(int i = 0; i < size + 1; i++) {
	        if(ans[i] != last || exclude == true) {
	            sum += ans[i];
	        } else {
	            exclude = true;
	        }
	    }
	    cout << sum << endl;
	}
    return 0;
}
