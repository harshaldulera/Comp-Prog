#include <bits/stdc++.h>
using namespace std;

bool specialcharacter(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9');
}

bool checkPalindrome(string s) {
    for(char& ch : s) {
        ch = tolower(ch);
    }

    int st = 0;
    int en = s.size() - 1;
    while(st < en) {
        if(!specialcharacter(s[st])) {
            st++;
        } else if(!specialcharacter(s[en])) {
            en--;
        } else if(s[st] != s[en]) {
            return "No";
        } else {
            st++;
            en--;
        }
    }
    return "Yes";
}

int main () {
    string s;
    cin >> s;
    cout << checkPalindrome(s) << endl;
}