#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k, n;
	cin >> k >> n;
	
	vector<int> v(k);
	int maxV = -1;
	
	for (int i = 0; i < k; i++)
	{
		cin >> v[i];
		maxV = max(maxV, v[i]);
	}
	int ans = 0;

	long long low = 1;
	long long high = maxV;
	
	while (low <= high)
	{
		long long mid = (low + high) / 2;
		int cnt = 0;
		
		for (int i = 0; i < k; i++)
			cnt += v[i] / mid;

		if (cnt >= n)
		{
			low = mid + 1;

			if (ans < mid)
				ans = mid;
		}
		else
			high = mid - 1;
	}

	cout << ans << "\n";
	return 0;
}