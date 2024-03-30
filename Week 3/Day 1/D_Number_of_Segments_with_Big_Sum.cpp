/* #include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (ll &x : v)
        cin >> x;

    ll l = 0, r = 0;
    long long sum = 0;
    ll ans = 0;
    while (r < n)
    {
        sum += v[r];

        if (sum < s)
        {
            r++;
            continue;
        }
        else
        {
            ans++;

            while (l < r)
            {
                sum -= v[l];
                l++;
                if (sum >= s)
                    ans++;

                else
                    break;
            }
        }
        r++;
    }
    cout << ans;
    return 0;
} */

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    cin >> n >> s;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = 0;
    ll sum = 0;
    ll ans = 0;

    while (r < n)
    {
        sum += arr[r];
        while (sum >= s && l <= r)
        {
            // cout << ans << endl;
            ans += n - r;
            sum -= arr[l];
            l++;
        }

        r++;
    }

    cout << ans << "\n";
    return 0;
}
