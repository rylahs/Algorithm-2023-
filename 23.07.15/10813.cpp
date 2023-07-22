#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<int> ball(n + 1, 0);

	for (int i = 0; i <= n; i++)
		ball[i] = i;

	while (m--)
	{
		int i, j;
		cin >> i >> j;
		swap(ball[i], ball[j]);
	}

	for (int i = 1; i <= n; i++)
		cout << ball[i] << " ";
	return 0;
}