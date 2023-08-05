#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[52][52];
bool vis[52][52];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int m, n, k;
		cin >> m >> n >> k;

		for (int i = 0; i < n; i++)
		{
			fill(board[i], board[i] + m, 0);
			fill(vis[i], vis[i] + m, false);
		}

		for (int i = 0; i < k; i++)
		{
			int x, y;
			cin >> x >> y;

			board[y][x] = 1;
		}

		queue<pair<int, int>> Q;

		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (board[i][j] == 1)
				{
					if (!vis[i][j])
					{
						vis[i][j] = true;
						Q.push({ i, j });
						cnt++;

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
								if (vis[nx][ny] || board[nx][ny] != 1)
									continue;

								vis[nx][ny] = true;
								Q.push({ nx, ny });
							}
						}
					}
				}
			}
		}
		cout << cnt << "\n";
	}


	return 0;
}