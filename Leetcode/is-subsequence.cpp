class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == t)
            return true;
        int subSize = s.size();
        int tSize = t.size();
        int start = 0;
        for (int i = 0; i < tSize; i++) {
            if (s[start] == t[i]) {
                start++;
            }
            if (start == subSize)
                return true;
        }
        return false;
    }
};