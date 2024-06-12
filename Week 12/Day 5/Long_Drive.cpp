#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        ll val = ceil(1.0 * (y * 10 - x * 10) / (100 - y));
        cout << val << endl;
    }
}
