#include <bits/stdc++.h>
using namespace std;

const int MX_TIME = 640000000;
int blck[258];
int ans[2];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, b, input;
	cin >> n >> m >> b;

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> input;
			cnt += input;

			for (int k = 1; k <= input; k++)
				blck[k]++;
		}
	}

	ans[0] = MX_TIME;

	for (int i = 0; i <= 256; i++)
	{
		int time = 0;
		int h = i;
		int inven = b;

		for (int j = 1; j <= i; j++)
		{
			inven -= n * m - blck[j];
			time += n * m - blck[j];
		}

		for (int j = i + 1; j <= 256; j++)
		{
			inven += blck[j];
			time += blck[j] * 2;
		}

		if (inven < 0)
			break;

		if (ans[0] >= time)
		{
			ans[0] = time;
			ans[1] = h;
		}
	}

	for (auto& e : ans)
		cout << e << " ";

	return 0;
}