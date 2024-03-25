#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        if (n == s.size())
            cout << s.size() << endl;
        else
        {
            int m = n;
            while (m > s.size())
                m -= 2;
            cout << m << endl;
        }
    }
    return 0;
}