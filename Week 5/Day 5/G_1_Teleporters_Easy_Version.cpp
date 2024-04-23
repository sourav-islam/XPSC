#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (c > 0 && v[i] < c)
            {
                c -= (v[i] + i + 1);
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}