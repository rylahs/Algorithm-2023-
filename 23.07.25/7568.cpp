#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		v.push_back({ x, y });
	}

	vector<int> res;
	for (int i = 0; i < n; i++)
	{
		int curX = v[i].first;
		int curY = v[i].second;

		int cnt = 1;
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				continue;
			if (curX < v[j].first && curY < v[j].second)
				cnt++;
		}
		res.push_back(cnt);
	}

	for (auto& e : res)
		cout << e << " ";

	return 0;
}