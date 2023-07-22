#include <bits/stdc++.h>
using namespace std;
bool b_search(vector<int>& v, int x)
{
	int start = 0;
	int end = v.size() - 1;

	while (start <= end)
	{
		int middle = (start + end) / 2;

		if (v[middle] == x)
			return true;
		else if (v[middle] < x)
			start = middle + 1;
		else
			end = middle - 1;
	}

	return false;
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int m;
	cin >> m;

	while (m--)
	{
		int input;
		cin >> input;

		bool is_find = b_search(v, input);
		if (is_find)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";

	}

	return 0;
}