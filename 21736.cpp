#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[602];
int vis[602][602];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> board[i];
	
	for (int i = 0; i < n; i++)
		fill(vis[i], vis[i] + m, -1);

	int cnt = 0;

	queue<pair<int, int>> Q;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 'X')
				vis[i][j] = 0;

			if (board[i][j] == 'I')
			{
				vis[i][j] = cnt;
				Q.push({ i, j });
			}
			
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

			if (board[nx][ny] == 'X' || vis[nx][ny] >= 0)
				continue;

			vis[nx][ny] = vis[cur.X][cur.Y];
			if (board[nx][ny] == 'P')
			{
				vis[nx][ny]++;
				cnt++;
			}

			Q.push({ nx, ny });

		}
	}

	if (cnt == 0)
		cout << "TT\n";
	else
		cout << cnt << "\n";
	return 0;
}