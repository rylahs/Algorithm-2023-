#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	queue<int> q;
	vector<int> v;

	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++)
		q.push(i);

	int cnt = 1;
	while (!q.empty())
	{
		int val = q.front();
		q.pop();

		if (cnt % k != 0)
		{
			q.push(val);
			cnt++;
		}
		else
		{
			v.emplace_back(val);
			cnt++;
		}
	}

	cout << "<";
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << v[i] << ", ";
		else
			cout << v[i];
	}
	cout << ">\n";
	return 0;
}