#include <bits/stdc++.h>
using namespace std;

int getLength(char name[]) {
    int cnt = 0;
    for(int i = 0; name[i] != '\0'; i++) {
        cnt++;
    }
    return cnt;
}

int main () {
    char name[20];

    cout << "Enter your name: "; 
    cin >> name;

    cout << "Your namee is: " << name << endl;

    cout << "Length of string: " << getLength(name) << endl;

    return 0;

}