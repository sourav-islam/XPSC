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
        vector<int> ans;

        // for (int i = 1; i * i <= n; i++)   // 10^5 x sqrt(10^12) = 10^5 x 10^6 = 10^11 so, TLE
        // {
        //     if (n % i == 0)
        //     {
        //         ans.push_back(i);
        //         if (n / i != i)
        //             ans.push_back(n / i);
        //     }
        // }

        vector<bool> prime(n + 1, true);
        for (int i = 2; i * i <= n; i++)
        {
            if (prime[i])
            {
                for (int j = i + i; j <= n; j += i)
                {
                    prime[j] = false;
                }
            }
        }

        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                if (n % i == 0)
                    ans.push_back(i);
            }
        }
        ans.push_back(1);
        ans.push_back(n);

        if (ans.size() == 3)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}