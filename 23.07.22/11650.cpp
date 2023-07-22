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
	sort(v.begin(), v.end(), less<>());

	for (auto& e : v)
		cout << e.first << " " << e.second << "\n";
	return 0;
}