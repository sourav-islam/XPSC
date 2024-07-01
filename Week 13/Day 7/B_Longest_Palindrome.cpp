#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

bool palindrome(string s)
{
    string str = s;
    reverse(s.begin(), s.end());
    if (str == s)
        return true;
    else
        return false;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<string> s(n), org, rev;
    vector<pair<int, string>> plndrm;

    for (string &x : s)
        cin >> x;

    for (int i = 0; i < n; i++)
    {
        string org_s = s[i];
        reverse(s[i].begin(), s[i].end());

        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                org.push_back(org_s);
                // rev.push_back(s[j]);
                //  cout << org_s << endl;
                //  cout << s[j] << endl;
            }
        }
        if (palindrome(org_s))
        {
            plndrm.push_back({org_s.size(), org_s});
            // cout << org_s.size() << " " << org_s << endl;
        }
    }
    sort(plndrm.rbegin(), plndrm.rend());

    if (plndrm.size() > 0)
        cout << org.size() * m * 2 + plndrm[0].first << endl;
    else
        cout << org.size() * m * 2 << endl;

    for (auto s : org)
        cout << s;
    if (plndrm.size() > 0)
        cout << plndrm[0].second;
    for (int i = org.size() - 1; i >= 0; i--)
    {
        reverse(org[i].begin(), org[i].end());
        cout << org[i];
    }

    return 0;
}