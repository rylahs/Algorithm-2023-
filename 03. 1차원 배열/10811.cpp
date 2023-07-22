#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> v;
	for (int i = 0; i <= n; i++)
		v.emplace_back(i);

	while (m--)
	{
		int i, j;
		cin >> i >> j;
		
		reverse(v.begin() + i, v.begin() + j + 1);
	}

	for (int i = 1; i <= n; i++)
		cout << v[i] << " ";
	return 0;
}