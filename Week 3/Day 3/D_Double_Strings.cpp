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

        /*  for (auto it = mp.begin(); it != mp.end(); it++)
         {
             cout << it->first << " " << it->second << endl;
         } */
        cout << endl;
    }
    return 0;
}