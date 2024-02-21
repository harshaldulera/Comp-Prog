#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        int size;
        cin >> size;
        vector<int> vec(size);

        for(int i = 0; i < size; i++){
            cin >> vec[i];
        }
        
        bool problem = true;
        
        for(int i = 0; i < size; i++){
            if(vec[i] <= 4){
                problem = false;
                break;
            }  
        }
        
        if(problem){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}