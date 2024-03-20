#include <bits/stdc++.h>
using namespace std;

int main() {
   
    int t;
    cin >> t;
    while(t--)
    {
        int n;cin >> n;
        char c; cin >> c;
        string s;
        cin >> s;
        s += s;
        int cnt = 0, ans = 0;
        if(c =='g') 
        {
            cout << 0 << endl; continue;}
        bool flag = false;
        for(int i= 0; i < s.size(); i++)
        {
            if(s[i] == 'g')
            {
                ans = max(ans, cnt);
                flag = false;
            }
            if(s[i] == c && flag == false)
            {
                cnt = 0;
                flag = true;
            }
            if(flag) cnt++;
        }
        cout << ans << endl;
    }

    return 0;
}