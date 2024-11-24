#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

vector<int> rotateArray(vector<int>& arr, int n) {
    vector<int> temp(arr.size());
    for(int i = 0; i < arr.size(); i++) {
        temp[i + 1 % arr.size()] = arr[i];
    }
    arr = temp;
    return temp;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rotateArray(arr, n);



    // return 0;
}