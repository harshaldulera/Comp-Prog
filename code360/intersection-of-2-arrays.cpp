/* 
Brute Force Approach: TLE

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
	vector<int> common;
	vector<bool> used(m, false);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(arr1[i] < arr2[j]) {
				break;
			}
			if(arr1[i] == arr2[j] && !used[j]) {
				common.emplace_back(arr1[i]);
				used[j] = true;
				break;
			}
		}
	}
	return common;
}
*/


#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
	int i =0; int j = 0;
	vector<int> common;
	while(i < n && j < m) {
		if (arr1[i] < arr2[j]){
			i++;
		} else if (arr1[i] == arr2[j]) {
			common.emplace_back(arr1[i]);
			i++;
			j++;
		} else if (arr1[i] > arr2[j]) {
			j++;
		}
	}
	return common;
}

// All passed
