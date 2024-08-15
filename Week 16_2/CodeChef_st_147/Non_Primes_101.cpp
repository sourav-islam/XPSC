#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

pair<int, int> NotPrime(const vector<int> &A)
{
    int n = A.size();
    int evenIdx = -1, oddIdx = -1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0 && evenIdx == -1)
        {
            evenIdx = i;
        }
        if (A[i] % 2 != 0 && oddIdx == -1)
        {
            oddIdx = i;
        }

        if (evenIdx != -1 && oddIdx != -1)
        {
            if (!isPrime(A[evenIdx] + A[oddIdx]))
            {
                return {evenIdx + 1, oddIdx + 1};
            }
        }
    }

    int evenIdx1 = -1, evenIdx2 = -1;
    int oddIdx1 = -1, oddIdx2 = -1;

    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            if (evenIdx1 == -1)
            {
                evenIdx1 = i;
            }
            else
            {
                evenIdx2 = i;
                return {evenIdx1 + 1, evenIdx2 + 1};
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (A[i] % 2 != 0)
        {
            if (oddIdx1 == -1)
            {
                oddIdx1 = i;
            }
            else
            {
                oddIdx2 = i;
                if (!isPrime(A[oddIdx1] + A[oddIdx2]))
                {
                    return {oddIdx1 + 1, oddIdx2 + 1};
                }
            }
        }
    }

    return {-1, -1};
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        pair<int, int> result = NotPrime(a);

        if (result.first == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << result.first << " " << result.second << endl;
        }
    }

    return 0;
}
