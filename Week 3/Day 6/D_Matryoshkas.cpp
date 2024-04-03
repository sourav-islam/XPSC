#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a, a + n);
        int ans = 0;
        for (int x : a)
        {
            int val = x;
            if (mp[x] != 0)
            {
                ans++;
                while (mp[val] > 0)
                {

                    mp[val]--;
                    val += 1;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
