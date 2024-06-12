
#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

int count_ones_in_binary(int count)
{
    bitset<32> binary(count);
    return binary.count();
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        bitset<32> binary(x);
        int ones = count_ones_in_binary(x);
        if (ones >= y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
