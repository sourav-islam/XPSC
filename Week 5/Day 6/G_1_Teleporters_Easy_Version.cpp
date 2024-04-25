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

        for (int i = 0; i < n; i++)
        {
            v[i] += (i + 1);
        }
        sort(v.begin(), v.end());
        int sum = 0, ans = 0;
        for (int x : v)
        {
            if (sum + x > c)
                break;

            sum += x;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}