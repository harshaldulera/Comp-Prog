#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr, int size) {
    for(int i = 1; i < size; i++) {
        int temp = arr[i];
        int j = i - 1;
        for(; j <= 0; j--) {
            if(arr[j] > temp) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main () {
    int size; cin >> size;
    vector<int> arr(size);

    for(auto &i : arr) {
        cin >> arr[i];
    }

    insertionSort(arr, size);

    return 0;
}