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

    int i = 1, j = 2;
    vector<int> ans;
    while (j <= n)
    {
        ans.push_back(j);
        j += 2;
    }
    while (i <= n)
    {
        ans.push_back(i);
        i += 2;
    }

    if (n == 1)
        cout << 1 << '\n';
    else if (n <= 3)
        cout << "NO SOLUTION" << endl;
    else
    {
        for (auto x : ans)
            cout << x << " ";
    }
    return 0;
}