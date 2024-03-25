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
        int n, x;
        cin >> n >> x;

        if (n == x)
            cout << "YES" << endl;
        else if (n > x)
        {

            n -= 1;
            x += 1;
            if (n == x)

                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {

            x -= 1;
            n += 3;
            if (n == x)

                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
} */

#include <iostream>
using namespace std;

string NumberOfProblems(int N, int M)
{
    if ((abs(N - M) % 2) == 0)
        return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int N, M;
        cin >> N >> M;
        cout << NumberOfProblems(N, M) << endl;
    }

    return 0;
}

// C
/* #include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        if (m == n)
        {
            cout << "YES" << '\n';
        }
        else
        {

            int x = m + n;
            int y = x + 2;
            if (x % 2 == 0 || y % 2 == 0)
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
    }
    return 0;
}
// C
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        if ((n % 2 == 0) && (m % 2 == 0)) {
            cout << "YES" << '\n';
        }
        else if ((n % 2 == 1) && (m % 2 == 1)) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

//C

int32_t main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<"YES"<<endl;
        else if(a>b) {
            while(a>b) {
                a--;
                b++;
            }
            if(a==b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else {
            while(a<b) {
                b--;
                a+=3;
            }
            while(a>b) {
                a--;
                b++;
            }
            if(a==b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
*/

// E
/* #include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;

        ll sum = 0;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum < n) {
            cout << "NO" << '\n';
            continue;
        }

        if (sum % n == 0){
            cout << "YES" << '\n';
            continue;
        }

//         er ager case ta dekhen..
// Jodi sum % n == 0 na hoi, tar mane sobai soman pai nai...jeheto soman pai nai tai k = 0 hote parbena.

        if(k == 0)
            cout << "NO" << '\n';

        else
            cout << "YES" << '\n';

    }
    return 0;
}

// E, Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        cin>>n >>k;
        vector<int>a(n);
        int sum=0;
        for(int i = 0;i < n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        vector<int>arr(n, 0);
        while(sum > 0){
            for(int i = 0;i < n;i++){
                arr[i]++;
                sum--;
                if(sum == 0) break;
            }
        }
        bool flag = true;
        for(int i = 0;i < n-1; i++){
            if(arr[i] == 0 arr[i+1] ==0  arr[i] - arr[i+1] > k)
            {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
// E
int32_t main ()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--)
    {
        int n,k;
        cin>>n>>k;
        int sum = 0;
        for(int i=0;i<n;i++) {
            int vl;
            cin>>vl;
            sum += vl;
        }


//         at least sobar chololate 1 hote hobe... so ... jodi sum n er theke kom hoi tahole NO..

// abar jodi max difference 0 hoi . tar mane sobar same chocolate thakte hobe.  tai jodi sum , n diye mod 0 na hoi tahole NO
// ar sob khetre yes.2nd no , jokhon k=0
        if(sum<n) cout<<"NO"<<endl;
        else if(sum%n!=0 && k==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
 */

/* "//AUTHOR: MAHEDI HASAN ANIK",
        "//CREATED: $CURRENT_YEAR-$CURRENT_MONTH-$CURRENT_DATE $CURRENT_HOUR:$CURRENT_MINUTE:$CURRENT_SECOND", */