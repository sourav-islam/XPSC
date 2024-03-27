#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pp(x) cout << x << "\n"
#define int long long int
#define ck(x) cout << #x << " = " << x << "\n"
#define endl "\n"
#define pb(x) push_back(x)
const int N = 1e5 + 5;

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int cnt = 0;
        for (auto it : mp)
        {
            if (it.second % 2 != 0)
                cnt++;
        }

        if (cnt - 1 < 0)
            cnt = 0;
        else
            cnt = cnt - 1;

        if (k >= cnt && k <= n)
            yes;
        else
            no;
    }
    return 0;
}