#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<pair<int, int>> v;
        for (int i = 0; i < x; i++)
        {
            if ((i ^ (i + 1)) == x)
                cout << i << " " << i + 1 << endl;
            // v.push_back({i, i + 1});
        }
        /* pair<int, int> ans;
        int mi = INT_MAX;
        for (auto p : v)
        {
            //  if((p.second - p.first) < mi)
            //  {
            //      mi = (p.second - p.first);
            //      ans = {p.first, p.second};
            //  }
            cout << p.first << " " << p.second << endl;
        }
        //  cout << ans.first << " " << ans.second << endl;
     */
    }
}
