#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// #define int long long
#define pp(x) cout << x << "\n"

/* void method()
{
    ll n;
    cin >> n;
    vector<ll> pos(n), pwr(n);
    for (ll &x : pos)
        cin >> x;
    for (ll &y : pwr)
        cin >> y;

    // left -> <- right
    ll left_pos = 0;
    ll right_pos = n - 1;
    for (ll i = 1; i < n; i++)
    {
        ll diff = pos[i] - pos[i - 1];

        if (diff > pwr[i - 1])
            break;
        else
            left_pos = i;
    }
    for (ll i = n - 2; i >= 0; i--)
    {
        ll diff = pos[i + 1] - pos[i];
        if (diff > pwr[i + 1])
            break;
        else
            right_pos = i;
    }
    if ((right_pos - left_pos) <= 1)
    {
        cout << "YES" << endl;
        return;
    }

    // left <- middle -> right
    left_pos = 0;
    right_pos = n - 1;
    for (ll i = 1; i < n; i++)
    {
        ll diff = pos[i] - pos[i - 1];

        if (diff > pwr[i])
            break;
        else
            left_pos = i;
    }
    for (ll i = n - 2; i >= 0; i--)
    {
        ll diff = pos[i + 1] - pos[i];
        if (diff > pwr[i])
            break;
        else
            right_pos = i;
    }
    if ((right_pos - left_pos) <= 1)
    {
        cout << "YES" << endl;
        return;
    }

    ll count = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll diff = pos[i + 1] - pos[i];
        if (diff > pos[i])
            count++;
    }
    if (count <= 1)
    {
        cout << "YES" << endl;
        return;
    }

    count = 0;
    for (ll i = n - 1; i > 0; i--)
    {
        ll diff = pos[i] - pos[i - 1];
        if (diff > pos[i])
            count++;
    }
    if (count <= 1)
    {
        cout << "YES" << endl;
        return;
    }

    cout << "NO" << endl;
} */

void method()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> p(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    int left1 = 0;
    int right1 = n - 1;
    int left2 = 0;
    int right2 = n - 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] + p[i] >= v[i + 1])
        {
            left1++;
        }
        else
        {
            break;
        }
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (abs(v[i] - p[i]) <= v[i - 1])
        {
            right1--;
        }
        else
        {
            break;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (abs(v[i] - p[i]) <= v[i - 1])
        {
            left2++;
        }
        else
        {
            break;
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] + p[i] >= v[i + 1])
        {
            right2--;
        }
        else
        {
            break;
        }
    }
    int lt = max(left1, left2);
    int rt = min(right1, right2);

    if (lt + 1 >= rt)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        method();
    }
    return 0;
}