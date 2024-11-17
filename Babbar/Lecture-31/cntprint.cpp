#include <bits/stdc++.h>
using namespace std;

#define PI 3.14
#define long long ll

void print(int n) {
    if(n == 0)
        return ;

    cout << n << endl;

    print(n - 1);
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    
    cout << endl;

    print(n);
    // cout << ans << endl;

    return 0;
}