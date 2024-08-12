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
        vector<int> a(n);
        map<int, int> mp;
        for (int &x : a)
        {
            cin >> x;
            if (x != 0)
                mp[x]++;
        }
        if (mp.size() <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}