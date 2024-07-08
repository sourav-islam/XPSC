#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

/* void solve()
{
    string s, t;
    cin >> s;
    if (s == "abc")
    {
        cout << "YES" << '\n';
        return;
    }
    t = s;
    swap(t[0], t[1]);

    if (t == "abc")
    {
        cout << "YES" << '\n';
        return;
    }

    t = s;
    swap(t[1], t[2]);

    if (t == "abc")
    {
        cout << "YES" << '\n';
        return;
    }

    t = s;
    swap(t[2], t[0]);
    if (t == "abc")
    {
        cout << "YES" << '\n';
        return;
    }
    cout << "NO" << '\n';
    return;
} */
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        // solve();
        string s;
        cin >> s;
        string main = "abc";
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (main[i] != s[i])
                count++;
        }
        cout << (count <= 2 ? "YES" : "NO") << '\n';
    }
    return 0;
}