/* #include <bits/stdc++.h>

using namespace std;

ll main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string t(n + 1, '0');
        ll ans = 0;
        ll max_1 = 0;
        ll max_2 = 0;
        for (ll i = 0; i <= n / 2 - 1; ++i)
        {
            if (s[i] == s[n - i - 1])
                max_2++;
            else
                ans++;
        }
        if (n % 2 == 1)
            max_1++;
        for (ll j = 0; j <= max_2; ++j)
        {
            for (ll k = 0; k <= max_1; ++k)
            {
                t[ans + j * 2 + k] = '1';
            }
        }
        cout << t << "\n";
    }
} */

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll mismatch = 0, flag = 0;
        string t = "";
        for (ll i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
                mismatch++;
        }
        for (ll i = 0; i < mismatch; i++)
        {
            t += "0";
        }
        if (n % 2 == 1)
        {
            for (ll i = mismatch; i <= n - mismatch; i++)
            {
                t += "1";
            }
        }
        else
        {
            for (ll i = mismatch; i <= n - mismatch; i++)
            {
                t += (flag % 2 == 0) ? "1" : "0";
                flag++;
            }
        }

        for (ll i = 0; i < mismatch; i++)
        {
            t += "0";
        }

        cout << t << endl;
    }
    return 0;
}

/* #include<bits/stdc++.h>
#define ll long long
using namespace std;

ll main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
    #endif
    ll t;
    cin>>t;
    while(t--){
        ll n, mismatch = 0, flag = 0;
        cin>>n;
        string s,res = "";
        cin>>s;
        for(ll i = 0; i < n/2; i++) {
            mismatch+=(s[i]!=s[n-i-1]);
        }
        for(ll i = 0 ; i < mismatch ; i++) {
            res+="0";
        }
        if(n%2 != 0) {
            for(ll i = mismatch ; i <= (n-mismatch); i++) {
                res+="1";
            }
        }
        else {
            for(ll i = mismatch ; i <= (n-mismatch); i++) {
                res+=(flag%2 == 0)?"1":"0";
                flag++;
            }
        }
        for(ll i = 0 ; i < mismatch ; i++) {
            res+="0";
        }
        cout<<res<<endl;
    }
    return 0;
}


 */