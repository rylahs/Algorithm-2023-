#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> ball(n + 1, 0);
	while (m--)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int l = i; l <= j; l++)
			ball[l] = k;
	}

	for (int i = 1; i <= n; i++)
		cout << ball[i] << " ";
	return 0;
}