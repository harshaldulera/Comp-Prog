#include<bits/stdc++.h>
using namespace std;

int main () {
    int testcase;
    cin >> testcase;
    while(testcase--){
        int size;
        cin >> size;

        vector<int> weight(size);

        for(int i = 0; i < size; i++) {
            cin >> weight[i];
        }

        sort(weight.begin(), weight.end(), greater<int>());

        int max = 0;
        for(int i = 0; i < size; i++) {
            int temp = weight[i] * (i + 1);
            if(temp > max) {
                max = temp;
            }
        }
        cout << max << endl;
    }
    return 0;
}