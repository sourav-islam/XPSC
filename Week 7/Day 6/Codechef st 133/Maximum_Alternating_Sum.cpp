#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        sort(v.rbegin(), v.rend());

        int maxi = 0, mini = 0;
        if (n % 2 != 0)
        {
            for (int i = 0; i < n / 2; i++)
            {
                maxi += v[i];
            }
            for (int i = (n / 2) + 1; i < n; i++)
            {
                mini += v[i];
            }
            cout << maxi + v[n / 2] - mini << endl;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                maxi += v[i];
            }
            for (int i = n / 2; i < n; i++)
            {
                mini += v[i];
            }
            cout << maxi - mini << endl;
        }
    }
}
