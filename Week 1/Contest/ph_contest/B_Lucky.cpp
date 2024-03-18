#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    vector<ll> v;
    while (t--)
    {
        ll n;
        cin >> n;
        int ans = 0, ans2 = 0;
        int cnt = 0;
        while (n > 0)
        {
            int dig = n % 10;
            cnt++;
            n /= 10;
            if (cnt <= 3)
                ans += dig;
            else
                ans2 += dig;
        }
        if (ans == ans2)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}