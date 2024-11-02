#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr = {1, 2, 3, 4};

    /*
    vector<int> newv;

    cout << "Capacity: " << newv.capacity() << endl;

    newv.push_back(1);
    cout << "Capacity: " << newv.capacity() << endl;

    newv.push_back(2);
    cout << "Capacity: " << newv.capacity() << endl;

    newv.push_back(3);
    cout << "Capacity: " << newv.capacity() << endl;

    newv.push_back(4);
    cout << "Capacity: " << newv.capacity() << endl;
    */

    int size = arr.size();

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    cout << "Element at 2nd index " << arr.at(2) << endl;
    cout << "Array Empty or not " << arr.empty() << endl;
    cout << "First Element " << arr.front() << endl;
    cout << "Last Element " << arr.back() << endl;

    return 0;
}