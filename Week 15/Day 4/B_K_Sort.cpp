#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

void slv()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    int cost = 0, max_a = 0, max_op = 0;
    for (int i = 0; i < n; i++)
    {
        max_a = max(max_a, a[i]);
        cost += (max_a - a[i]);
        max_op = max(max_op, (max_a - a[i]));
    }
    cost += max_op;
    cout << cost << "\n";
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        slv();
    }
    return 0;
}

/* Approach:
** Minimum number of cost to convert the array non-decreasing order
elements : 344 12  37  60  311 613 365 328 675
converted: 344 344 344 344 344 613 613 613 675
so sum(bi - ai)
       =  0+(344-12)+(344-37)+(344-60)+(344-311)+0+(613-365)+(613-328)+0
total operations: max(bi - ai). because 1 to n (k = n) all values are decrease to
target value by max(bi - ai).operations.(means 344-12 = 332 is max , 344->37 need 307 operations) */