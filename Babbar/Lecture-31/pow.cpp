#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

int power(int n) {
    if(n == 0)
        return 1;

    return 2 * power(n - 1);
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    int ans = power(n);

    cout << ans << endl;
    

    return 0;
}