#include <bits/stdc++.h>
using namespace std;

/*
    if array = {1, 2, 3, 4, 5}
    then after swapping alternate elements, array will be 
    {2, 1, 4, 3, 5}
*/

void swapAlternate(int arr[], int size) {
    for(int i = 0; i < size; i += 2) {
        if(i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main () {
    int size; cin >> size;
    int arr[100];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    swapAlternate(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}