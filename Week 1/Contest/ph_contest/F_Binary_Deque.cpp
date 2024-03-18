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
        int n, s;
        cin >> n >> s;
        list<int> mylist;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ans += x;
            mylist.push_back(x);
        }
        int cnt = 0;
        if (ans == s)
            cout << 0 << endl;
        else if (ans < s)
            cout << -1 << endl;
        else
        {
            while (ans != s)
            {

                if (mylist.front() == 1)
                {
                    cnt++;
                    ans -= mylist.front();
                    mylist.pop_front();
                }
                else if (mylist.back() == 1)
                {
                    cnt++;
                    ans -= mylist.back();
                    mylist.pop_back();
                }
                else
                {
                    list<int>::iterator it = mylist.begin();
                    advance(it, mylist.size() - 2);
                    if (*it == 1)
                    {

                        cnt++;
                        ans -= mylist.back();
                        mylist.pop_back();
                    }
                    else
                    {
                        cnt++;
                        ans -= mylist.front();
                        mylist.pop_front();
                    }

                    /* cnt++;
                    ans -= mylist.front();
                    mylist.pop_front(); */
                }
            }
            if (ans == s)
                cout << cnt << endl;
            else
                cout << -1 << endl;
        }
        // mylist.clear();
    }
    return 0;
}

/* while( l.size()>1)
        {
            if(total == sum)break;
            total -= (l.front() + l.back());
            l.pop_back(), l.pop_front();
            i++;
        } */

/*  int ar[200005];
int k;
int l,r;
int knapsack(int step,int sum,int l,int r) {
    if(sum==k) return step;
    int option_1 = knapsack(step+1,sum-ar[l],l+1,r); // left
    int option_2 = knapsack(step+1,sum-ar[r],l,r-1); // right
    return min(option_1,option_2);
}   */

/* #include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;
    list<int> mylist;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ans += x;
        mylist.push_back(x);
    }
    int cnt = 0;
    if (ans == s)
        cout << 0 << endl;
    else if (ans < s)
        cout << -1 << endl;
    else
    {
        while (ans != s)
        {

            if (mylist.front() == 1)
            {
                cnt++;
                ans -= mylist.front();
                mylist.pop_front();
            }
            else if (mylist.back() == 1)
            {
                cnt++;
                ans -= mylist.back();
                mylist.pop_back();
            }
            else
            {
                //  list<int>::iterator it = mylist.begin();
                //  advance(it, 2);
                //  if (*it == 1)
                //  {
                //      cnt++;
                //      ans -= mylist.front();
                //      mylist.pop_front();
                //  }
                //  else
                {
                    // cnt++;
                    // ans -= mylist.back();
                    // mylist.pop_back();
                    cnt++;
                    ans -= mylist.front();
                    mylist.pop_front();
                }
            }
        }
        if (ans == s)
            cout << cnt << endl;
        else
            cout << -1 << endl;
    }
    // mylist.clear();
    return 0;
} */