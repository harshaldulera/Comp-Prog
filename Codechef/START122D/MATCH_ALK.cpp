#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--){
        vector<int> score(20, 0);

        for(int i = 0; i < 22; ++i){
            int runs, wickets;
            cin >> runs >> wickets;
            score[i] = runs + (wickets * 20);
        }

        int index = 0;
        for(int i = 1; i < 22; ++i){
            if(score[i] > score[index]){
                index = i;
            }
        }

        cout << index + 1 << endl;
    }
    
    return 0;
}