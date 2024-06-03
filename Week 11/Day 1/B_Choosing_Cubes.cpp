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
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int fav_val = a[f - 1];
        sort(a.begin(), a.end(), greater<int>());
        if (k == n)
        {
            cout << "YES" << endl;
            continue;
        }
        if (a[k - 1] <= fav_val && a[k] >= fav_val)
        {
            cout << "MAYBE" << endl;
            continue;
        }
        if (a[k] > fav_val)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}