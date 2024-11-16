#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

int factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int ans = factorial(n);

    cout << ans << endl;

    return 0;
}