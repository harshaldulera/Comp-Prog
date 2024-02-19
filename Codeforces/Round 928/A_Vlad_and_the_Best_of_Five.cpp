#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        char arr[5];
        for(int i = 0; i < 5; i++){
            cin >> arr[i];
        }

        int countA = 0; 
        int countB = 0;

        for(int i = 0; i < 5; i++){
            if(arr[i] == 'A'){
                countA++;
            } else if (arr[i] = 'B'){
                countB++;
            }
        }

        // cout << countA << endl;
        // cout << countB;

        if(countA > countB){
            cout << 'A' << endl;
        } else {
            cout << 'B' << endl;
        }
    }
    return 0;
}