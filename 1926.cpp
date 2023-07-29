#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool visited[502][502];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cin >> board[i][j];
	}

	int cnt = 0;
	int area = 0;
	int mx_area = -1;

	queue<pair<int, int>> Q;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (board[i][j] == 1 && !visited[i][j])
			{
				visited[i][j] = true;
				Q.push({ i, j });
				cnt++;
				area = 0;
			}

			while (!Q.empty())
			{
				pair<int, int> cur = Q.front();
				area++;
				Q.pop();

				for (int dir = 0; dir < 4; dir++)
				{
					int nx = cur.X + dx[dir];
					int ny = cur.Y + dy[dir];

					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;

					if (visited[nx][ny] || board[nx][ny] != 1)
						continue;

					visited[nx][ny] = true;
					Q.push({ nx, ny });
				}
				
			}
			mx_area = max(mx_area, area);
		}
	}

	cout << cnt << "\n" << mx_area << "\n";
	return 0;
}