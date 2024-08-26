#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
bool f()
{
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;

    bool f = false;
    int a = 0, b = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
            b--;

        else if (s[i] == 'R')
            b++;

        else if (s[i] == 'U')
            a--;

        else if (s[i] == 'D')
            a++;

        int dist = abs(x - a) + abs(y - b);
        if (dist == i + 1)
        {
            return true;
        }
    }
    return false;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        cout << (f() ? "Yes" : "No") << endl;
    }
    return 0;
}