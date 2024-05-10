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
        string s, s2;
        cin >> s;
        s2 = s;
        set<char> s1;
        for (char c : s)
        {
            s1.insert(c);
        }
        if (s1.size() == 1)
            cout << "NO" << endl;
        else
        {
            reverse(s.begin(), s.end());
            cout << "YES" << endl;
            if (s == s2)
            {
                sort(s.begin(), s.end());
                cout << s << endl;
            }
            else
                cout << s << endl;
        }
    }
    return 0;
}