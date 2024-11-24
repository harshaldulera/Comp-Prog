class Solution {
public:
    bool isValid(string s) {
        stack<char> input;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                input.push(s[i]);
            } else {    
                if(input.empty()) {
                    return false;
                } else if (s[i] == ')' && input.top() != '(' || s[i] == ']' && input.top() != '[' || s[i] == '}' && input.top() != '{') {
                    return false;
                }
                input.pop();
            }
        }
        return input.empty();
    }
};