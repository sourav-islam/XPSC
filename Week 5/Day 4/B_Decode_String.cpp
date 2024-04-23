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
        string t;
        cin >> t;
        map<int, char> mp;
        char c = 'a';
        for (int i = 1; i <= 26; i++)
        {

            mp.insert({i, c});
            c++;
        }
        /* for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        } */
        string s = "";
        for (int i = n - 1; i >= 0; i--)
        {
            if (t[i] == '0')
            {
                int val = (t[i - 2] - '0') * 10 + (t[i - 1] - '0');
                s += mp[val];
                i -= 2;
            }
            else
                s += mp[t[i] - '0'];
        }

        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}
