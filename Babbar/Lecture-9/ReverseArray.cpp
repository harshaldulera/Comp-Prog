#include <bits/stdc++.h>
using namespace std;

// void reverseArray(int arr[], int size) {
//     for(int i = size - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }
// }


// swap approach
void reverseArray(int arr[], int size) {
    for(int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

int main () {
    int size; cin >> size;
    int arr[10];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
    }

    return 0;
}