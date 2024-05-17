// Since a and b are both divisors of X(because their LCM must be X)

#include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"

int gcd(int a, int b)
{
    return __gcd(a, b);
}

void findMinMaxLCM(int X)
{
    int minMaxAB = X;
    int bestA = 1, bestB = X;

    for (int a = 1; a <= sqrt(X); ++a)
    {
        if (X % a == 0)
        {
            int b = X / a;

            // Check if LCM(a, b) == X
            if ((a * b) / gcd(a, b) == X)
            {
                if (max(a, b) < minMaxAB)
                {
                    minMaxAB = max(a, b);
                    bestA = a;
                    bestB = b;
                }
            }
        }
    }

    cout << bestA << " " << bestB << endl;
}

int32_t main()
{
    int X;
    cin >> X;

    findMinMaxLCM(X);

    return 0;
}
