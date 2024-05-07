#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        int sum = 0;
        v[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            v[i] = i;
            sum += v[i];
        }
        int req = sum % n;
        v[req] = v[req] + req;
        for (int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}