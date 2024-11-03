#include <bits/stdc++.h>
using namespace std;

string reverseOrderWords(string str){
  int n = str.length();
  string st = "", temp = "";
  for (int i = n - 1; i >= 0; i--){
    if (str[i] != ' '){
      temp += str[i];
    } else {
      reverse(temp.begin(), temp.end());
      st += temp + ' ';
      temp = "";
    }
  }

  reverse(temp.begin(), temp.end());
  st += temp;
  return st;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    getline(cin, str);

    cout << reverseOrderWords(str) << endl;

    return 0;
}