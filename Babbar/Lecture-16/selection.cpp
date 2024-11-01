#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr, int size){
    for(int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < size; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    } 
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int size; cin >> size;
    vector<int> arr(size);

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}