#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, k, cnt = 0;
        cin >> a >> b >> k;

        if (b >= k)
        {
            cnt = b % k;
            b -= cnt;
        }

        while (b > a)
        {
            if (b / k < a)
            {
                break;
            }
            b /= k;
            cnt++;
            if (b >= k)
            {
                cnt += b % k;
                b -= b % k;
            }
        }

        if (b == a)
        {
            cout << cnt << '\n';
            continue;
        }

        cnt += b - a;
        cout << cnt << '\n';
    }
}