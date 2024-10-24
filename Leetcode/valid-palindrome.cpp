/*

Not passing demo test cases. Need to debug.

class Solution {
public:
    bool isPalindrome(string str) {
        int len = str.length() - 1;
        int h = 0;
        for(int i = 0; i <= len; i++) {
            str[i] = tolower(str[i]);
        }

        while(h <= len) {
            if(!(str[h] >= 'a' && str[h] <= 'z')) {
                h++;
            } else if (!(str[len] >= 'a' && str[len] <= 'z')) {
                h--;
                len++;
            } else if (str[len] == str[h]){
                return false;
            }
        }

        return true;
    }
};
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while(start < end) {
            if(!isalnum(s[start])){
                ++start;
            } else if (!isalnum(s[end])) {
                --end;
            } else if (tolower(s[start]) != tolower(s[end])) {
                return false;
            } else {
                ++start;
                --end;
            }
        }
        return true;
    }
};