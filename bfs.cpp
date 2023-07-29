#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second // pair���� first, second�� ���̱� ���ؼ� ���

int board[502][502] = 
{	{1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
	{1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
	{1, 1, 1, 0, 1, 0, 0, 0, 0, 0},
	{1, 1, 0, 0, 1, 0, 0, 0, 0, 0},
	{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
}; // 1�� �湮 ����, 0�� �湮 �Ұ�

bool vis[502][502]; // �ش� ĭ�� �湮�ߴ� �� ���θ� ����
int n = 7, m = 10; // n�� ��(����) ��, m�� ��(����) ��

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 }; // �� �� �� �� (dx,dy) ��ǥ ���߱�


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	queue<pair<int, int>> Q;
	vis[0][0] = true; // 0,0 �湮�� ����

	Q.push({ 0, 0 }); // �湮�� ���� push

	while (!Q.empty())
	{
		pair<int, int> cur = Q.front();
		Q.pop();

		cout << "(" << cur.X << ", " << cur.Y << ") -> ";
		for (int dir = 0; dir < 4; dir++) // �����¿� ���Ǳ�
		{
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir]; //nx, ny�� ������ ���캼 ��ǥ

			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue; // ���� ��

			if (vis[nx][ny] || board[nx][ny] != 1)
				continue; // �̹� �湮�߰ų�, �湮 �Ұ����� ĭ�� ����

			vis[nx][ny] = true; // �湮 ����

			Q.push({ nx, ny });
		}
	}


	return 0;
}