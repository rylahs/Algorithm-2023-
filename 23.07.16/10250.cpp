#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int h, w, n;
		cin >> h >> w >> n;

		int x = n / h + 1;
		int y = n % h;
		if (y == 0)
		{
			y = h;
			x -= 1;
		}

		cout << y;
		cout.width(2);
		cout.fill('0');
		cout << x << "\n";
	}

	return 0;
}