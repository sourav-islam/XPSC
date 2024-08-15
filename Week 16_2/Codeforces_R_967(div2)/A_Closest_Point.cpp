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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        if (n == 1)
            cout << "YES" << "\n";
        else if (n == 2 && a[0] + 1 != a[1])
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}