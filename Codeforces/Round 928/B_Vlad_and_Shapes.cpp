//INCOMPLETE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int size;
        cin >> size;
        vector<vector<int>> shape(size, vector<int>(size));
        int countOne = 0;

        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                cin >> shape[i][j];

                if (shape[i][j] == 1) {
                    countOne++;
                }
            }
        }

        if (countOne == size * size) {
            cout << "SQUARE" << endl;
        } else {
            cout << "TRIANGLE" << endl;
        }
    }
    return 0;
}
