#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	int y;
	cin >> x >> y;
	int ans = 2*x;
	if(ans >= y) {
	    cout << "METAL";
	} else {
	    cout << "PLASTIC";
	}
    return 0;
}
