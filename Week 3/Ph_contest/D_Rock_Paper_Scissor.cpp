#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll cf = 0, cfn = 0;
        string c1, c2;
        cin >> c1 >> c2;
        for (ll i = 0; i < c1.size(); i++)
        {
            if (c1[i] == c2[i])
            {
                continue;
            }
            else if (c1[i] == 'R' && c2[i] == 'S')
                cf += 1;
            else if (c1[i] == 'S' && c2[i] == 'R')
                cfn += 1;
            else if (c1[i] == 'S' && c2[i] == 'P')
                cf += 1;
            else if (c1[i] == 'P' && c2[i] == 'S')
                cfn += 1;
            else if (c1[i] == 'P' && c2[i] == 'R')
                cf += 1;
            else if (c1[i] == 'R' && c2[i] == 'P')
                cfn += 1;
        }
        if (cf == cfn)
            cout << 1 << endl;
        else if (cf > cfn)
            cout << 0 << endl;
        else
            cout << (cfn - cf) / 2 + 1 << endl;
    }
    return 0;
}
