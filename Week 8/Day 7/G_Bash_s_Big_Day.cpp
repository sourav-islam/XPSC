#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n), a;
    for (int &x : v)
        cin >> x;

    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 1)
        {
            ok = false;
        }
    }
    if (ok)
    {
        cout << 1 << "\n";
        return 0;
    }
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {

        for (int j = 2; j * j <= v[i]; j++)
        {
            if (v[i] % j == 0)
            {
                cnt[j]++;
                while (v[i] % j == 0)
                {

                    v[i] /= j;
                }
            }
        }
        if (v[i] > 1)
            cnt[v[i]]++;
    }
    // for (auto [x, y] : cnt)
    //     cout << x << "->" << y << "\n";

    // cout << '\n';

    int maxi = 0;
    for (auto [x, y] : cnt)
    {
        maxi = max(maxi, y);
    }
    cout << maxi << '\n';
    return 0;
}