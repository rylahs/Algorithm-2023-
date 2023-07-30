#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string maze[1002];
int distF[1002][1002];
int distH[1002][1002];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> maze[i];

	queue<pair<int, int>> FQ;
	queue<pair<int, int>> HQ;


	for (int i = 0; i < n; i++)
	{
		fill(distF[i], distF[i] + m, -1);
		fill(distH[i], distH[i] + m, -1);

		for (int j = 0; j < m; j++)
		{
			if (maze[i][j] == 'F')
			{
				distF[i][j] = 0;
				FQ.push({ i, j });
			}

			if (maze[i][j] == 'J')
			{
				distH[i][j] = 0;
				HQ.push({ i, j });
			}
		}
	}


	while (!FQ.empty())
	{
		pair<int, int> cur = FQ.front();
		FQ.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;

			if (maze[nx][ny] == '#' || distF[nx][ny] >= 0)
				continue;

			distF[nx][ny] = distF[cur.X][cur.Y] + 1;
			FQ.push({ nx, ny });
		}
	}

	while (!HQ.empty())
	{
		pair<int, int> cur = HQ.front();
		HQ.pop();

		for (int dir = 0; dir < 4; dir++)
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
			{
				cout << distH[cur.X][cur.Y] + 1 << "\n";
				return 0;
			}

			if (distH[nx][ny] >= 0 || maze[nx][ny] == '#')
				continue;

			if (distF[nx][ny] != -1 && distF[nx][ny] <= distH[cur.X][cur.Y] + 1)
				continue;

			distH[nx][ny] = distH[cur.X][cur.Y] + 1;
			HQ.push({ nx, ny });
		}
	}

	cout << "IMPOSSIBLE\n";

	return 0;

}