#include <bits/stdc++.h>
using namespace std;
/* int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v(n);
		for (int &x : v)
			cin >> x;
		sort(v.begin(), v.end());
		if (n == 1)
			cout << 0 << '\n';
		else
			cout << v.back() - v.front() << '\n';
	}
	return 0;
} */

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		vector<int> arr(n + 1);
		for (int i = 1; i <= n; i++)
			cin >> arr[i];

		int maxi = arr[n] - arr[1];
		// fix arr[n]
		for (int i = 1; i <= n - 1; i++)
		{
			maxi = max(maxi, arr[n] - arr[i]);
		}

		// fix arr[1]
		for (int i = 2; i <= n; i++)
		{
			maxi = max(maxi, arr[i] - arr[1]);
		}

		// pick entire array as a sub-segment
		for (int i = 1; i <= n - 1; i++)
			maxi = max(maxi, arr[i] - arr[i + 1]);

		cout << maxi << endl;
	}
}