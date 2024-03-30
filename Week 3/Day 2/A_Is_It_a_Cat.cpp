/* #include <bits/stdc++.h>
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
        string s;
        cin >> s;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'm' || s[i] == 'M')
                v[i] = 1;
            else if (s[i] == 'e' || s[i] == 'E')
                v[i] = 2;
            else if (s[i] == 'o' || s[i] == 'O')
                v[i] = 3;
            else if (s[i] == 'w' || s[i] == 'W')
                v[i] = 4;
            else
                v[i] = 5;
        }
        bool flag = true;
        if (n < 4 || v[n - 1] < 4)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < v.size() - 1; i++)
            {
                if (v[i] > v[i + 1] || v[i + 1] > 4)
                {
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
} */

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
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        // cout << s << endl;
        s.erase(unique(s.begin(), s.end()), s.end());
        if (s == "meow")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}