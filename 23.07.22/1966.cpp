#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n, m;
		cin >> n >> m;
		
		queue<pair<int, int>> q;
		priority_queue<int> pq;

		for (int i = 0; i < n; i++)
		{
			int input;
			cin >> input;

			q.push({ i, input });
			pq.push(input);
		}

		int cnt = 0;
		while (!q.empty())
		{
			int idx = q.front().first;
			int pri = q.front().second;
			q.pop();

			if (pq.top() == pri)
			{
				pq.pop();
				cnt++;

				if (idx == m)
				{
					cout << cnt << "\n";
					break;
				}
			}
			else
			{
				q.push({ idx, pri });
			}
		}
	}
	return 0;
}