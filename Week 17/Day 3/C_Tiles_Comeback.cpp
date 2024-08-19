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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        vector<int> sf(n, 0);
        sf[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {
            sf[i] = sf[i + 1] + (a[i] == a[n - 1]);
        }

        if (a[0] == a[n - 1])
        {
            if (sf[0] % k == 0 || sf[0] >= k)
            {
                cout << "YES" << "\n";
                continue;
            }
        }

        bool f = false;
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cnt += (a[i] == a[0]);
            if (cnt % k == 0 && sf[i + 1] >= k)
            {
                f = true;
                break;
            }
        }
        cout << (f ? "YES" : "NO") << "\n";
    }
    return 0;
}