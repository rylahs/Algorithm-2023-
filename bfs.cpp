#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second // pair에서 first, second를 줄이기 위해서 사용

int board[502][502] = 
{	{1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
	{1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
	{1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
	{1, 1, 0, 0, 1, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
}; // 1이 방문 가능, 0은 방문 불가

bool vis[502][502]; // 해당 칸을 방문했는 지 여부를 지정
int n = 7, m = 10; // n은 행(세로) 수, m은 열(가로) 수

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 }; // 상 하 좌 우 (dx,dy) 좌표 맞추기


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	queue<pair<int, int>> Q;
	vis[0][0] = true; // 0,0 방문을 가정

	Q.push({ 0, 0 }); // 방문한 점을 push

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();

		cout << "(" << cur.X << ", " << cur.Y << ") -> ";
		for (int dir = 0; dir < 4; dir++) // 상하좌우 살피기
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir]; //nx, ny는 다음에 살펴볼 좌표

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue; // 범위 밖

			if (vis[nx][ny] || board[nx][ny] != 1)
				continue; // 이미 방문했거나, 방문 불가능한 칸은 제외

			vis[nx][ny] = true; // 방문 시작

			Q.push({ nx, ny });
		}
	}


	return 0;
}