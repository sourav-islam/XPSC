#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        // int n;
        // cin >> n;
        // if ((n < 999) && (n / 10 == 10) && (n % 10 >= 2))
        //     cout << "YES" << endl;
        // else if (n < 10000 && (n / 100 == 10) && (n % 100) > 9)
        //     cout << "YES" << endl;
        // else
        //     cout << "NO" << endl;

        string s;
        cin >> s;
        if (s.size() < 3)
        {
            cout << "NO" << endl;
            continue;
        }

        string t = s.substr(2); // print 3 to remaining characters

        const ll a = stoll(s.substr(0, 2)); // print 0 index theke 2 ta charcters
        const ll b = stoll(t);

        if (a == 10 && b >= 2 && t[0] != '0')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}