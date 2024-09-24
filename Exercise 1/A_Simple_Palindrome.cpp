#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
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
        char ar[] = {'a', 'e', 'i', 'o', 'u'};
        vector<char> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(ar[i % 5]);
        }
        sort(v.begin(), v.end());
        for (auto ch : v)
            cout << ch;
        cout << "\n";
    }
    return 0;
}