#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}

	vector<bool> is_exist(2000002, false);

	int x;
	cin >> x;

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		if ((x - v[i]) > 0 && is_exist[x - v[i]] == true)
			res++;

		is_exist[v[i]] = true;
	}

	cout << res << "\n";

	return 0;
}