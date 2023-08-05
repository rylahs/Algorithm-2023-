#include <bits/stdc++.h>
using namespace std;



int tomato[102][102][102];
int date[102][102][102];

int dx[6] = {-1, 0, 0, 1, 0, 0};
int dy[6] = {0, -1, 0, 0, 1, 0};
int dz[6] = {0, 0, -1, 0, 0, 1};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n, h;
	cin >> m >> n >> h;
	
	queue<tuple<int, int, int>> Q;

	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				cin >> tomato[i][j][k];
				if (tomato[i][j][k] == 1)
					Q.push({ i, j, k });
				if (tomato[i][j][k] == 0)
					date[i][j][k] = -1;
			}
		}
	}

	while (!Q.empty())
	{
		tuple<int, int, int> cur = Q.front();
		Q.pop();
		int curX, curY, curZ;
		tie(curZ, curX, curY) = cur;
		for (int dir = 0; dir < 6; dir++)
		{
			int nx = curX + dx[dir];
			int ny = curY + dy[dir];
			int nz = curZ + dz[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h)
				continue;
			if (date[nz][nx][ny] >= 0)
				continue;

			date[nz][nx][ny] = date[curZ][curX][curY] + 1;

			Q.push({ nz, nx, ny });
		}
	}
	int max_value = -1;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (date[i][j][k] == -1)
				{
					cout << -1 << "\n";
					return 0;
				}
				max_value = max(max_value, date[i][j][k]);
			}
		}
	}
	cout << max_value << "\n";
	return 0;
}