#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        bool rowFlag = false;
        bool colFlag;

        for (int i = 0; i < n * 2; i++)
        {
            if (i % 2 == 0)
                rowFlag = !rowFlag;

            if (rowFlag)
                colFlag = false;
            if (!rowFlag)
                colFlag = true;

            for (int j = 0; j < n * 2; j++)
            {

                if (rowFlag)
                {
                    if (j % 2 == 0)
                    {
                        colFlag = !colFlag;
                    }
                }
                else
                {
                    if (j % 2 == 0)
                    {
                        colFlag = !colFlag;
                    }
                }

                if (colFlag)
                    cout << "#";
                else
                    cout << ".";
            }

            cout << endl;
        }
    }
    return 0;
}