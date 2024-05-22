#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        //  if(x == y) cout << 1 << endl;
        //  else if (x > y) cout << x %3 << endl;
        //  else cout << y%3 << endl;
        int ma = max(x, y);
        cout << ma % 3 << endl;
    }
}
