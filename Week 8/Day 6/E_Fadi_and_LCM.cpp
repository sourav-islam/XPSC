#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

int gcd(int a, int b)
{
    return __gcd(a, b);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }

    int maxi = v[0];

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j <= v.size(); j++)
        {

            if (lcm(v[i], v[j]) == n)
            {
                cout << v[i] << " " << v[j] << '\n';
                break;
            }
        }
    }

    return 0;
}