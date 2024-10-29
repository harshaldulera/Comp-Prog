#include <bits/stdc++.h>
using namespace std;

long long int binarySearch(int n) {
    int start = 0;
    int end = n - 1;
    long long int mid = start + (end - start) / 2;

    long long int ans = -1;
    
    if (n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    while(start <= end) {
        long long int square = mid * mid;
        if(square == n) {
            return mid;
        }

        if(square < n) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int floorSqrt(int n) {
    return binarySearch(n);
}