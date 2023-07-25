#include <bits/stdc++.h>
using namespace std;

int solve(int n)
{
	vector<int> v(n + 1, 0);
	v[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		v[i] = v[i - 1] + 1;

		if (i % 2 == 0)
			v[i] = min(v[i / 2] + 1, v[i]);

		if (i % 3 == 0)
			v[i] = min(v[i / 3] + 1, v[i]);
	}

	return v[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	cout << solve(n) << "\n";

	return 0;
}