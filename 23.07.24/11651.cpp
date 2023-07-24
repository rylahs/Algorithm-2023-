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
		v.push_back({ y, x });
	}

	sort(v.begin(), v.end(), less<>());

	for (auto e : v)
		cout << e.second << " " << e.first << "\n";

	return 0;
}