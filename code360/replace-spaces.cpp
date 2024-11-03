#include <bits/stdc++.h> 
using namespace std;
string replaceSpaces(string &str){
	// Write your code here.
    string ans = "";
    for(char& ch : str) {
        if (ch == ' ') {
            ans += "@40";
        } else {
            ans += ch;
        }
    }
    return ans;
}

int main() {
    string str;
    getline(cin, str);
    cout << replaceSpaces(str) << endl;
    return 0;
}