#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void slv()
{
    int n, x;
    cin >> n >> x;
    set<int> a;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        a.insert(val);
    }
    vector<int> v;
    for (int i = 0; i <= x; i++)
    {
        v.push_back(i);
    }
    for (int i = x - 1; i > 0; i--)
        v.push_back(i);

    /* for (int i : v)
        cout << i << " ";
    cout << endl; */
    int ans = 0, cnt = 0;
    for (int i = 1; i < v.size(); i++)
    {
        if (a.find(v[i]) != a.end())
        {
            cnt = 0;
            continue;
        }
        cnt++;
        ans = max(ans, cnt);
    }
    cout << ans + 1 << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        slv();
    }
    return 0;
}

/* Approach 1:
Create line 1 to x to x-1 to 1.Find maximum diff from each stations.
n = 3, x = 7
stations ind: 1 2 5
line : 1 2 3 4 5 6 7 6 5 4 3 2 1
       0 0     0       0     0 0
diff:       2       3     2
Answer: max diff + 1 */

/* Approach 2:
Stations: 0 < a1 < a2 < a3 <a4 ... < a^n < x
car capacity >= max(a1-0, a2-a1, a3-a2,...a^n - a^n-1, 2*(x - a^n))
** 2*(x - a^n) because (a^n -> x and back x-> a^n) */