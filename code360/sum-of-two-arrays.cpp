#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int i = n - 1; int j = m - 1;
    int carry = 0;
    while(i >= 0 && j >= 0) {
        int val = a[i];
        int val2 = b[j];
        int sum = val + val2 + carry;
        a[i] = sum % 10;
        carry = sum / 10;
        i--; j--;
    }
    while(i >= 0) {
        int val = a[i];
        int sum = val + carry;
        a[i] = sum % 10;
        carry = sum / 10;
        i--;
    }
    while(j >= 0) {
        int val = b[j];
        int sum = val + carry;
        a.insert(a.begin(), sum % 10);
        carry = sum / 10;
        j--;
    }
    if(carry) {
        a.insert(a.begin(), carry);
    }   
    return a;
}