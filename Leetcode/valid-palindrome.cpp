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


// Another Solution

class Solution {
public:
    bool valid(char ch) {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }

    bool isPalindrome(string s) {
        // int i = 0;
        string temp = "";

        for(int j = 0; j < s.size(); j++){
            if (valid(s[j])) {
                temp.push_back(tolower(s[j]));
            }
        }
        int i = 0, j = temp.length() - 1;
        while(i < j) {
            if(temp[i] != temp[j]){
                return false;
            }

            i++; j--;
        }
        return true;
    }
};