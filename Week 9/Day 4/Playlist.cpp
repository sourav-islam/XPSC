/* #include <bits/stdc++.h>
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

    vector<int> songs(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> songs[i];
    }

    unordered_set<int> uniqueSongs;
    int longestSequence = 0;
    int l = 0;

    for (int r = 0; r < n; r++)
    {
        while (uniqueSongs.find(songs[r]) != uniqueSongs.end())
        {
            uniqueSongs.erase(songs[l]);
            l++;
        }
        uniqueSongs.insert(songs[r]);
        longestSequence = max(longestSequence, r - l + 1);
    }

    cout << longestSequence << endl;
    return 0;
} */

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
    set<int> s;
    vector<int> v(n);
    for (int &x : v)
        cin >> x;
    int l = 0, r = 0;
    int ans = 0;
    while (r < n)
    {
        while (s.count(v[r]))
        {
            s.erase(v[l]);
            l++;
        }
        s.insert(v[r]);
        ans = max(ans, (int)s.size());
        r++;
    }
    cout << ans << endl;
    return 0;
}