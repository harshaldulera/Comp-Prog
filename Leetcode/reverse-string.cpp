#include <bits/stdc++.h>
using namespace std;


// Reverse Function
/*
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.rbegin(), s.rend());
    }
};
*/

// Custom Reverse Function
class Solution {
    public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() - 1;
        while(start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
}