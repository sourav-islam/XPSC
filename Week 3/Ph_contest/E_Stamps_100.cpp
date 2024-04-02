#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = -1;
        for (int i = 0; i < n - 2; i++)
        {
            if (s[i] == '1')
            {
                x = i;
                break;
            }
        }
        if (x == -1)
        {
            cout << s << endl;
        }
        else
        {
            for (int i = x + 1; i < n; i++)
            {
                s[i] = '0';
            }
            cout << s << endl;
        }
    }
    return 0;
}