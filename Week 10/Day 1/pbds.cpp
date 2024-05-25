#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    // check with less<T> and less_equal<T>
    pbds<int> p;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        p.insert(x);
    }
    // p.erase(4);
    // p.erase(p.find(4));

    // int x = p.order_of_key(4);
    // cout << x << endl;

    auto it = p.find_by_order(2); // index start from 0
    cout << *it << endl;

    for (int val : p)
        cout << val << " ";
    cout << endl;

    // Erase functions doesn't work on multiset(less_equal) it can be done with following code.
    /*   pbds<pair<int, int>> s;
      for (int i = 1; i <= n; i++)
      {
          int x;
          cin >> x;
          s.insert({x, i});
      }
      s.erase({4, 1});
      // s.erase(s.find(3));
      for (auto [x, y] : s)
          cout << x << " " << y << endl; */
    return 0;
}