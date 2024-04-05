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
        vector<pair<int, int>> v1, v2, v3;

        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v1.push_back({x, j});
        }
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v2.push_back({x, j});
        }
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v3.push_back({x, j});
        }

        sort(v1.begin(), v1.end(), greater<pair<int, int>>());
        sort(v2.begin(), v2.end(), greater<pair<int, int>>());
        sort(v3.begin(), v3.end(), greater<pair<int, int>>());

        /*     for (int i = 0; i < n; i++)
            {
                cout << v1[i].first << " " << v1[i].second << endl;
            }
            cout << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << v2[i].first << " " << v2[i].second << endl;
            }
            cout << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << v3[i].first << " " << v3[i].second << endl;
            }
            cout << endl; */
        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (v1[i].second != v2[j].second && v2[j].second != v3[k].second && v1[i].second != v3[k].second)
                    {
                        ans = max(ans, (v1[i].first + v2[j].first + v3[k].first));
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}