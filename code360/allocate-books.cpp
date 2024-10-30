#include <bits/stdc++.h> 

bool isPossible(int n, int b, long long int mid, vector<int> &pages) {
	int count = 1;
	int pageSum = 0;

	for(int i = 0; i < n; i++ ) {
		if(pageSum + pages[i] <= mid) {
			pageSum += pages[i];
		} else {
			count++;
			if(count > b || pages[i] > mid) {
				return false;
			}
			pageSum = pages[i];
		}
	}
	return true;
}

int allocateBooks(vector<int> &pages, int n, int b){

	if(n < b) {
		return -1;
	}
	int start = 0;
	int sum = 0;
	for(int i = 0; i < n; i++) {
		sum += pages[i];
	}

	int ans = -1;
	int end = sum;

	long long int mid = start + (end - start) / 2;

	while(start <= end) {
		if(isPossible(n, b, mid, pages)) {
			ans = mid;
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		mid = start + (end - start) / 2;
	}
	return ans;
}