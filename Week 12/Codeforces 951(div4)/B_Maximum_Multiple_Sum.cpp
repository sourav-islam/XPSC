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
        vector<pair<int, int>> v;
        int sum = 1;
        for (int i = 2; i <= n; i++)
        {
            for (int j = 1; j * i <= n; j++)
            {
                sum += (i * j);
                if (sum > n)
                {
                    v.push_back({sum - (i * j), i});
                    break;
                }
            }
        }
        sort(v.begin(), v.end());
        cout << v[0].second << endl;
    }

    return 0;
}