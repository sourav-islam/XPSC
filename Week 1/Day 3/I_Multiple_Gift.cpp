#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x, y;
    cin >> x >> y;
    ll cnt = 0;
    while (x <= y)
    {
        x *= 2;
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}