#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

class Solution {
public:
    bool isValid(string s) {
        deque<int> dq;
        for(int i = 0; i < s.size(); i++ ) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                dq.push_back(s[i]);
            } else {
                if(dq.empty()) {
                    return false;
                } else if ((s[i] == ')' && dq.back() != '(') || (s[i] == ']' && dq.back() != '[') || (s[i] == '}' && dq.back() != '{')) {
                    return false;
                }
                dq.pop_back();
            }
        }
        return dq.empty();
    }
};

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;
    Solution obj;
    // obj.isValid(s);

    if(obj.isValid(s)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}