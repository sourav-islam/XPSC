#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    vector<int> v(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        // v[s[i] - 'a']++;
        int val = s[i] - 'a';
        v[val]++;
    }
    bool flag = false;
    int ans;
    for (int i = 0; i < 26; i++)
    {
        if (v[i] == 0)
        {
            flag = true;
            ans = i;
            break;
        }
    }
    if (flag)
        cout << char(ans + 'a');
    else
        cout << "None";
    return 0;
}