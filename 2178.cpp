#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

string board[102];
int visited[102][102];

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
	int cnt = 1;
	queue<pair<int, int>> Q;
	visited[0][0] = cnt++;
	Q.push({ 0, 0 });

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
			if (visited[nx][ny] > 0 || board[nx][ny] != '1')
				continue;

			visited[nx][ny] = visited[cur.X][cur.Y] + 1;
			Q.push({ nx, ny });
			
		}
	}

	cout << visited[n - 1][m - 1] << "\n";



	return 0;
}