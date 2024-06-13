#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    list<int> a;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            a.push_back(v[i]);
        else
            a.push_front(v[i]);
    }
    for (auto v : a)
        cout << v << " ";
    return 0;
}