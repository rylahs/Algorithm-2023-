#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	vector<vector<int>> v1, v2;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		vector<int> input;
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			input.emplace_back(x);
		}
		v1.emplace_back(input);
	}
	for (int i = 0; i < n; i++)
	{
		vector<int> input;
		for (int j = 0; j < m; j++)
		{
			int x;
			cin >> x;
			input.emplace_back(x);
		}
		v2.emplace_back(input);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			v1[i][j] += v2[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << v1[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}