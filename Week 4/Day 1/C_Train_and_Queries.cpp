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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        map<int, vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        while (q--)
        {
            int a, b;
            cin >> a >> b;
            bool flag = false;
            if (!mp[a].empty() && !mp[b].empty())
            {
                if ((a == b) || (mp[a].front() < mp[b].back()))
                {
                    flag = true;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}