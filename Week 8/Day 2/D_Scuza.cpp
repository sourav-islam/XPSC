#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        int n, q;
        cin >> n >> q;
        vector<long long> a(n + 1);
        vector<long long> pref(n + 1);
        vector<long long> maxi(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pref[i] = pref[i - 1] + a[i];
            maxi[i] = max(maxi[i - 1], a[i]);
        }
        for (int i = 0; i < q; i++)
        {
            long long ans = 0;
            long long x;
            cin >> x;
            int k = upper_bound(maxi.begin(), maxi.end(), x) - maxi.begin() - 1;
            if (k >= 0)
            {
                ans = pref[k];
            }
            cout << ans << " ";
        }
        cout << "\n";
    }
    return 0;
}