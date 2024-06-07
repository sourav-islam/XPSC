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
    map<int, int> df;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        df[l] += 1;
        df[r + 1] += -1;
    }
    int current_sum = 0;
    for (auto it = df.begin(); it != df.end(); ++it)
    {
        current_sum += it->second;
        it->second = current_sum;
    }

    int ans = 0;
    for (const auto &entry : df)
    {
        ans = max(ans, entry.second);
    }
    cout << ans << endl;
    return 0;
}