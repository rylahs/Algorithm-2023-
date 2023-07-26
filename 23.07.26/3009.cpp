#include <bits/stdc++.h>
using namespace std;

int x[1002];
int y[1002];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;

		x[a]++;
		y[b]++;
	}

	int goal_x = find(x, x + 1001, 1) - x;
	int goal_y = find(y, y + 1001, 1) - y;

	cout << goal_x << " " << goal_y << "\n";

	return 0;
}