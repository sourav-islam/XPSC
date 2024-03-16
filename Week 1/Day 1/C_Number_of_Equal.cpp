#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int &x : a)
        cin >> x;
    for (int &x : b)
        cin >> x;
    int l = 0, r = 0;
    long long ans = 0;

    while (l < n && r < m)
    {
        int cnt1 = 0, cnt2 = 0, cur = a[l];
        while (a[l] == cur)
        {
            cnt1++;
            l++;
        }
        while (cur > b[r] && r < m)
            r++;
        while (b[r] == cur)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans;
    return 0;
}
