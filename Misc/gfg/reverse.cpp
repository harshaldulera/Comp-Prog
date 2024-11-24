#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

void reverseString(vector<char>& s) {
    stack<char> st;
    
    for(char c : s) {
        st.push(c);
    }

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<char> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    reverseString(s);


    return 0;
}