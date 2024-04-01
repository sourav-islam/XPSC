/* #include <bits/stdc++.h>
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
        vector<string> v(n);
        for (string &s : v)
            cin >> s;

        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mp.insert(make_pair(v[i] + v[j], 1));
                // cout << v[i] + v[j] << endl;
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (mp.count(v[i]))
                cout << 1;
            else
                cout << 0;
        }

        //  for (auto it = mp.begin(); it != mp.end(); it++)
        //  {
        //      cout << it->first << " " << it->second << endl;
        //  }
        cout << endl;
    }
    return 0;
} */

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
        vector<string> v(n);
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]] = 1;
        }

        for (int i = 0; i < n; i++)
        {

            bool flag = false;
            for (int j = 1; j < v[i].size(); j++)
            {
                string s1 = "", s2 = "";
                for (int k = 0; k < j; k++)
                {
                    s1 += v[i][k];
                }
                for (int k = j; k < v[i].size(); k++)
                {
                    s2 += v[i][k];
                }
                if (mp[s1] && mp[s2])
                    flag = true;
            }
            if (flag)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}