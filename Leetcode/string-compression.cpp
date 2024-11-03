/*
class Solution {
public:
    int compress(vector<char>& chars) {
        map<char, int> mp;
        for(char& ch : chars) {
            mp[ch]++;
        }
        int cnt = 0;
        for(auto& it : mp) {
            chars[cnt++] = it.first;
            if(it.second > 1) {
                string s = to_string(it.second);
                for(char& ch : s) {
                    chars[cnt++] = ch;
                }
            }
        }
        return cnt;
    }
};
*/

#include <bits/stdc++.h>   
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();   
        while(i < n) {
            int j = i + 1;
            while(j < n && chars[i] == chars[j]){
                j++;
            }
            chars[ansIndex++] = chars[i];
            int cnt = j - i;
            if(cnt > 1) {
                string s = to_string(cnt);
                for(char& ch : s) {
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        return ansIndex;
    }
};