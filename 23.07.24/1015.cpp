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
		int input;
		cin >> input;

		v.push_back({ input, i });
	}

	stable_sort(v.begin(), v.end(), less<>());

	vector<pair<int, int>> ans;

	for (int i = 0; i < n; i++)
		ans.push_back({ v[i].second, i });
	
	stable_sort(ans.begin(), ans.end(), less<>());

	for (auto& e : ans)
		cout << e.second << " ";
	
	return 0;
}