#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	bool isComplete = false;
	int mxVal = -1;
	for (int i = 0; i < n - 2; i++)
	{
		if (isComplete)
			break;
		for (int j = i + 1; j < n - 1; j++)
		{
			if (i == j)
				continue;
			for (int k = j + 1; k < n; k++)
			{
				if (i == k || j == k)
					continue;
				int sum = v[i] + v[j] + v[k];
				if (mxVal < sum && sum <= m)
				{
					mxVal = sum;
					if (sum == m)
						isComplete = true;
				}
			}
		}
	}

	cout << mxVal << "\n";
	return 0;
}