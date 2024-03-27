#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        int max_occ = 0;
        for (auto &[x, y] : mp)
        {
            max_occ = max(max_occ, y);
        }
        int ans = 0;
        while (max_occ < n)
        {
            int rem = min(n - max_occ, max_occ);
            ans += 1 + rem;
            max_occ += rem;
        }
        cout << ans << endl;
    }
    return 0;
}
