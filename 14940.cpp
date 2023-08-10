#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[1002][1002];
int dist[1002][1002];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	int cnt = 0;
	queue<pair<int, int>> Q;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 1)
				dist[i][j] = -1;

			if (board[i][j] == 2)
				Q.push({ i, j });
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
			
			if (board[nx][ny] == 0 || dist[nx][ny] >= 0)
				continue;

			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << dist[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}