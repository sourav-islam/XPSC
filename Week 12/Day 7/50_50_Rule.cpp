#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int atn, scr;
        cin >> atn >> scr;
        if (atn < 50)
            cout << "Z" << endl;
        else if (scr < 50)
            cout << "F" << endl;
        else
            cout << "A" << endl;
    }
    return 0;
}