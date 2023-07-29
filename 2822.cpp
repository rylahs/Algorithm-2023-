#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<pair<int, int>> v;
	for (int i = 1; i < 9; i++)
	{
		int input;
		cin >> input;
		v.push_back({ input, i });
	}

	sort(v.begin(), v.end());

	int sum = 0;

	set<int> st;

	for (int i = 3; i < 8; i++)
	{
		sum += v[i].first;
		st.insert(v[i].second);
	}

	cout << sum << "\n";

	for (auto& e : st)
		cout << e << " ";
	cout << "\n";
	return 0;
}