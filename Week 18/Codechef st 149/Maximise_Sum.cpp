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
        vector<int> a(n);
        int sum = 0;
        int size = 0, mn = 1e6;
        for (int &x : a)
        {
            cin >> x;
            // if (x == 0)
            //     z = true;
            if (x < 0)
                size++;
            sum += abs(x);
            mn = min(mn, abs(x));
        }

        if (size % 2 == 0)
        {

            cout << sum << endl;
        }
        else
        {

            cout << sum - 2 * mn << endl;
        }
    }
    return 0;
}