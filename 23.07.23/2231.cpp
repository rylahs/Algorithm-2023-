#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int sum, tmp;
	bool min_find = false;
	for (int i = 1; i < n; i++)
	{
		if (min_find == true)
			break;

		sum = i;
		tmp = i;

		while (tmp)
		{
			sum += tmp % 10;
			tmp /= 10;
		}

		if (sum == n)
		{
			cout << i << "\n";
			min_find = true;
		}

	}
	if (!min_find)
		cout << 0 << "\n";

	return 0;
}