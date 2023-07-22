#include <bits/stdc++.h>
using namespace std;

int square[102][102];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	while (n--)
	{
		int x, y;
		cin >> x >> y;

		for (int i = x; i < x + 10; i++)
		{
			for (int j = y; j < y + 10; j++)
			{
				if (square[i][j] == 0)
					square[i][j] = 1;
			}
		}
	}
	int res = 0;
	for (int i = 0; i < 102; i++)
		for (int j = 0; j < 102; j++)
			if (square[i][j] == 1) res++;


	cout << res << "\n";

	return 0;
}