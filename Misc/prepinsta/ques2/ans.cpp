#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str){
        unordered_map<char, int> mp;
        
        // Step 1: Count frequency of each character
        for(char& ch : str) {
            mp[ch]++;
        }
        
        // Step 2: Find the maximum occurring character
        int maxCnt = 0;
        char res = 'z';  // Initialize to 'z' to handle lexicographical comparison

        for(auto& it : mp) {
            // If the current character has a higher count or same count but lexicographically smaller
            if(it.second > maxCnt || (it.second == maxCnt && it.first < res)) {
                maxCnt = it.second;
                res = it.first;
            }
        }
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();  // To ignore the newline after t
    while(t--) {
        string str;
        getline(cin, str);  // Read the whole line
        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;
    }
    return 0;
}
