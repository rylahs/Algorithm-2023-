#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);

	int etc_num = 0;
	while (!q.empty())
	{
		etc_num = q.front();
		q.pop();

		if (!q.empty())
		{
			int x = q.front();
			q.push(x);
			q.pop();
		}
	}

	cout << etc_num << "\n";
	return 0;
}