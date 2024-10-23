#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;

	sort(arr.begin(), arr.end());

	for(int i = 0; i < arr.size(); i++) {
		for(int j = i + 1; j < arr.size(); j++) {
			for(int k = j + 1; k < arr.size(); k++) {
				if(arr[i] + arr[j] + arr[k] == K) {
					ans.push_back({arr[i], arr[j], arr[k]});
				}
			}
		}
	}
	return ans;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, K;
        cin >> n >> K;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        vector<vector<int>> result = findTriplets(arr, n, K);

        if (result.empty()) {
            cout << "No triplets found\n";
        } else {
            for (const auto& triplet : result) {
                cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
            }
        }
    }
    return 0;
}