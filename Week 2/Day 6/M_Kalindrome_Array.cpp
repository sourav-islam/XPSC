#include <bits/stdc++.h>
using namespace std;

bool palindrome(vector<int> v, int x)
{
    int i = 0, j = v.size() - 1;
    while (i < j)
    {
        if (v[i] == x)
            i++;
        else if (v[j] == x)
            j--;
        else if (v[i] != v[j])
            return false;
        else
            i++, j--;
    }
    return true;
}
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
        vector<int> v(n);
        for (int &x : v)
            cin >> x;
        if (n < 2)
            cout << "YES" << endl;
        else
        {
            int i = 0, j = n - 1;
            bool flag = true;
            while (i < j)
            {
                if (v[i] != v[j])
                {
                    flag = palindrome(v, v[i]) || palindrome(v, v[j]);
                    break;
                }
                i++;
                j--;
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}