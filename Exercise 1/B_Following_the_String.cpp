#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
vector<pair<int, char>> v(26);
void alp()
{
    for (int i = 0; i < 26; i++)
    {
        v[i].first = i;
        v[i].second = 'a' - 1 + i;
    }
}
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

        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            cout << char((num % 26) + 'a');
        }

        cout << endl;
    }
    return 0;
}