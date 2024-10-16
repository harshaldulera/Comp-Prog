#include <bits/stdc++.h>
using namespace std;

int main() {
	int x; cin >> x;
	int n; cin >> n;
	int remaining = (x - (n * 10));
	int jalebi = remaining / 20;
    cout << abs(jalebi);
}
