/* #include <bits/stdc++.h>
using namespace std;
// typedef long long int ll;
#define int long long
#define pp(x) cout << x << "\n"
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N, 0);
        unordered_map<int, int> fre;
        int z = N;
        int max_freq = 0;

        for (int i = 0; i < N; i++)
        {
            int X, Y;
            cin >> X >> Y;

            int old_v = A[X - 1];
            A[X - 1] = Y;

            if (old_v != 0)
            {
                fre[old_v]--;
                if (fre[old_v] == 0)
                {
                    fre.erase(old_v);
                }
            }
            else
            {
                z--;
            }

            fre[Y]++;
            max_freq = max(max_freq, fre[Y]);

            int P = 0;
            for (auto &[value, count] : fre)
            {
                P += (count * (count - 1)) / 2;
            }

            int max_pairs = (max_freq + z) * (max_freq + z - 1) / 2;
            cout << max_pairs + (P - max_freq * (max_freq - 1) / 2) << " ";
        }
        cout << endl;
    }
    return 0;
}

 */
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N, 0);              // Initially, the array is filled with zeros
        unordered_map<int, int> freq_map; // To store the frequency of each value
        int zero_count = N;               // All elements are zeros initially
        int max_freq = 0;                 // To track the maximum frequency

        // Process the N updates
        for (int i = 0; i < N; i++)
        {
            int X, Y;
            cin >> X >> Y;

            // Update the array
            int old_value = A[X - 1];
            A[X - 1] = Y;

            // Adjust frequency of old value (if it was non-zero)
            if (old_value != 0)
            {
                freq_map[old_value]--;
                if (freq_map[old_value] == 0)
                {
                    freq_map.erase(old_value);
                }
            }
            else
            {
                zero_count--; // One less zero in the array now
            }

            // Adjust frequency of the new value
            freq_map[Y]++;
            max_freq = max(max_freq, freq_map[Y]); // Update max frequency

            // Calculate the maximum possible pairs (f(A))
            int P = 0;
            for (auto &[value, count] : freq_map)
            {
                P += (count * (count - 1)) / 2; // Number of pairs with the same value
            }

            // Calculate maximum pairs if remaining zeros are replaced by the most frequent value
            int max_pairs_with_zeros = (max_freq + zero_count) * (max_freq + zero_count - 1) / 2;
            cout << max_pairs_with_zeros + (P - max_freq * (max_freq - 1) / 2) << " ";
        }
        cout << endl;
    }

    return 0;
}
