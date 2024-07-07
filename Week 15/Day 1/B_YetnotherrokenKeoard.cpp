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
        string s;
        cin >> s;
        vector<pair<int, char>> B, b;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'B' || s[i] != 'b')
            {
                if (s[i] != 'B' && s[i] >= 'A' && s[i] <= 'Z')
                    B.push_back({i, s[i]});
                else if (s[i] != 'b' && s[i] >= 'a' && s[i] <= 'z')
                    b.push_back({i, s[i]});
                else
                {
                    if (s[i] == 'B' && !B.empty())
                    {
                        B.pop_back();
                    }
                    else if (s[i] == 'b' && !b.empty())
                        b.pop_back();
                }
            }
        }

        vector<pair<int, char>> f(B);
        for (int i = 0; i < b.size(); i++)
        {
            f.push_back(b[i]);
        }
        sort(f.begin(), f.end());
        if (!f.empty())
        {
            for (int i = 0; i < f.size(); i++)
                cout << f[i].second;
            cout << endl;
        }
        else
            cout << " " << endl;
    }
    return 0;
}