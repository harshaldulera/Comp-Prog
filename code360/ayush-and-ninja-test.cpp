#include <bits/stdc++.h> 
using namespace std;

bool isPossible(int n, int m, long long int mid, vector<int> time) {
    long long int count = 1;
    long long int pageSum = 0;

    for(int i = 0; i < m; i++) {
        if(pageSum + time[i] <= mid) {
            pageSum += time[i];
        } else {
            count++;
            if(count > n || time[i] > mid) {
                return false;
            }
            // pageSum = 0;
            pageSum = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) {	
    long long start = 0;
    long long sum = 0;

    for(int i = 0; i < m; i++) {
        sum += time[i];
    }
    long long ans = -1;

    long long end = sum;

    long long int mid = start + (end - start) / 2;

    while(start <= end) {
        if(isPossible(n, m, mid, time)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}