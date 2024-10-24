#include <bits/stdc++.h>
#include <set>;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int m;
        cin >> n >> m;

        string sa;
        string sb;
        cin >> sa >> sb;

        set<char> used;

        for (char i : sa)
        {
            used.insert(i);
        }

        for (char i : sb)
        {
            used.insert(i);
        }

        if (used.size() == 26)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
     return 0;
}
