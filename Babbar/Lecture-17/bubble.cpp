#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int size){
    for(int i = 1; i < size; i++) {
        bool swapped = false;
        for(int j = 0; j < size - i; j++) {
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false ){
            break;
        }
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size; cin >> size;
    vector<int> arr(size);

    for(auto& i : arr){
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    return 0;
}