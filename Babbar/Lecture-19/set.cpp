#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i : s) {
        cout << i << " ";
    } 
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    for(auto i : s) {
        cout << i << " ";
    } cout << endl;


    cout << "Is 5 present in the set: " << s.count(5) << endl;
 
    return 0;
}