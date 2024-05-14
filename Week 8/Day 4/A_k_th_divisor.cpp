#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> divisors;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (n / i != i)
                divisors.push_back(n / i);
        }
    }
    sort(divisors.begin(), divisors.end());
    if (k > divisors.size())
        cout << -1 << endl;
    else
        cout << divisors[k - 1] << endl;

    return 0;
}