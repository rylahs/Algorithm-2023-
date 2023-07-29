#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int tomato[1002][1002];
int date[1002][1002];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> m >> n;

	queue<pair<int, int>> Q;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> tomato[i][j];
			if (tomato[i][j] == 1)
				Q.push({ i, j });
			if (tomato[i][j] == 0)
				date[i][j] = -1;
		}
	}





	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (date[nx][ny] >= 0)
				continue;

			date[nx][ny] = date[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}

	int max_value = -1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			if (date[i][j] == -1)
			{
				cout << -1 << "\n";
				return 0;
			}
			max_value = max(max_value, date[i][j]);
		}

	}
	cout << max_value << "\n";
	return 0;
}