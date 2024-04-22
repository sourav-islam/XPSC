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
        string s;
        cin >> s;
        int n = s.size();
        map<char, vector<int>> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]].push_back(i + 1);
        }
        int cost = abs(s[0] - s[n - 1]);
        vector<int> jump;
        if (s[0] > s[n - 1])
        {

            for (char i = s[0]; i >= s[n - 1]; i--)
            {
                for (auto x : mp[i])
                {
                    jump.push_back(x);
                }
            }

            cout << cost << " " << jump.size() << endl;
            for (int x : jump)
                cout << x << " ";
            cout << endl;
        }
        else if (s[0] <= s[n - 1])
        {
            vector<int> path;
            for (char i = s[0]; i <= s[n - 1]; i++)
            {
                for (auto x : mp[i])
                {
                    path.push_back(x);
                }
            }
            cout << cost << " " << path.size() << endl;
            for (int x : path)
                cout << x << " ";
            cout << endl;
        }
        }

    return 0;
}