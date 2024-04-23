#include <bits/stdc++.h>
#define ll long long
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
        vector<int> v1(n), v2(n);
        for (int &x : v1)
            cin >> x;
        for (int &y : v2)
            cin >> y;

        int om_max = 0, om = 0;
        int addy_max = 0, addy = 0;
        for (int x : v1)
        {
            if (x > 0)
            {
                om++;
                if (x == v1[n - 1])
                    om_max = max(om_max, om);
            }
            else if (x == 0)
            {
                om_max = max(om_max, om);
                om = 0;
            }
        }
        for (int y : v2)
        {
            if (y > 0)
            {
                addy++;
                if (y == v2[n - 1])
                    addy_max = max(addy_max, addy);
            }
            else if (y == 0)
            {
                addy_max = max(addy_max, addy);
                addy = 0;
            }
        }

        if (addy_max > om_max)
            cout << "Addy" << endl;
        else if (addy_max < om_max)
            cout << "Om" << endl;
        else
            cout << "Draw" << endl;
        // cout << addy_max << " " << om_max << endl;
    }
    return 0;
}