#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool checkInclusion(string s1, string s2) {
        vector<int> s1Freq(26, 0);
        vector<int> s2Freq(26, 0);
        int n = s1.size();
        int m = s2.size();
        if(n > m) return false;
        for(int i = 0; i < n; i++) {
            s1Freq[s1[i] - 'a']++;
            s2Freq[s2[i] - 'a']++;
        }
        if(s1Freq == s2Freq) return true;
        for(int i = n; i < m; i++) {
            s2Freq[s2[i] - 'a']++;
            s2Freq[s2[i - n] - 'a']--;
            if(s1Freq == s2Freq) return true;
        }
        return false;
    }
};