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
        vector<int> v(n);

        for (int &x : v)
        {
            cin >> x;
        }

        int l = 0, r = n - 1;
        while (l <= n - 1 && v[l] <= 0)
            l++;
        while (r >= 0 && v[r] <= 0)
            r--;
        if (r <= l)
        {
            cout << 0 << endl;
        }
        else
        {
            int neg = 0;
            for (int i = l; i <= r; i++)
            {
                if (v[i] < 0)
                    neg++;
            }
            cout << neg << endl;
        }
    }
    return 0;
}