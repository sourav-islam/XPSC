#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int ar[n + 1];
        for (int &x : ar)
            cin >> x;

        while (q--)
        {
            vector<int> a(n + 1);
            for (int i = 1; i <= n; i++)
            {
                a[i] = ar[i];
            }
            int l, r, k;
            cin >> l >> r >> k;
            for (int i = l; i <= r; i++)
            {
                a[i] = k;
            }

            int ans = 0;
            for (int i = 1; i <= n; i++)
            {
                ans += a[i];
            }
            if (ans % 2 != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            a.clear();
        }
    }
    return 0;
}