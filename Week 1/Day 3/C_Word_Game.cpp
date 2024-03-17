#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    map<string, int> mp;
    while (t--)
    {
        int n;
        cin >> n;
        string s[3][n];
        map<string, int> mp;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s[i][j];
                mp[s[i][j]]++;
            }
        }
        int cost = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mp[s[i][j]] == 1)
                    cost += 3;
                else if (mp[s[i][j]] == 2)
                    cost += 1;
            }
            cout << cost << " ";
            cost = 0;
        }
        cout << endl;
    }

    return 0;
}