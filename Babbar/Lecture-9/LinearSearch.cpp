#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return true;
        }
    }

    return false;
}

int main () {
    int size; cin >> size;
    int arr[10];
    int key;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key to search: ";
    cin >> key;

    if(isPresent) {
        cout << "Key is present" << endl;
    } else {
        cout << "Key is not present" << endl;
    }
    return 0;
}