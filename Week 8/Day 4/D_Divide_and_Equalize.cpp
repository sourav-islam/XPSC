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
        for (int &val : v)
            cin >> val;

        map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            for (int j = 2; j * j <= v[i]; j++)
            {
                if (v[i] % j == 0)
                {
                    while (v[i] % j == 0)
                    {
                        cnt[j]++;
                        v[i] /= j;
                    }
                }
            }

            if (v[i] > 1)
                cnt[v[i]]++;
        }
        // for (auto [x, y] : cnt)
        // {
        //     cout << x << "-> " << y << endl;
        // }

        bool flag = true;
        for (auto [x, y] : cnt)
        {
            if (y % n != 0)
                flag = false;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}