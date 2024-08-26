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
        vector<int> a(n + 1, 0);
        int pre[n + 1] = {0};
        set<int> s;
        for (int i = 1; i <= n; i++)
        {

            cin >> a[i];
            s.insert(a[i]);
            pre[i] = pre[i - 1] + a[i];
        }
        if (s.size() == 1)
        {
            cout << "NO" << "\n";
            continue;
        }

        // bool ok = false;
        // for (int i = 2; i <= n; i++)
        // {
        //     if (a[i] == pre[i-1])
        //     {
        //         ok = true;
        //         break;
        //     }
        // }
        // if(ok)

        cout << "YES" << "\n";
        sort(a.begin(), a.end());
        if (n % 2 == 0)
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << a[n - i + 1] << " " << a[i] << " ";
            }
        }
        else
        {
            for (int i = 1; i <= n / 2; i++)
            {
                cout << a[n - i + 1] << " " << a[i] << " ";
            }
            cout << a[n / 2 + 1];
        }
        cout << "\n";
    }
    return 0;
}