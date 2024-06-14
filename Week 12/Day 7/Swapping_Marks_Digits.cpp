#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int reverse(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num /= 10;
    }
    return rev_num;
}
void somadhan()
{
    int a, b;
    cin >> a >> b;
    if (a > b || reverse(a) > b || a > reverse(b) || reverse(a) > reverse(b))
    {
        cout << "Yes" << endl;
        return;
    }
    else
        cout << "No" << endl;
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
        somadhan();
    }
    return 0;
}