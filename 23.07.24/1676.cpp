#include <bits/stdc++.h>
using namespace std;



int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int two_cnt = 0, five_cnt = 0;
	int tmp = 0;
	for (int i = 2; i <= n; i++)
	{
		tmp = i;

		while (tmp % 2 == 0)
		{ 
			two_cnt++;
			tmp /= 2;
		}

		while (tmp % 5 == 0)
		{
			five_cnt++;
			tmp /= 5;
		}


	}

	cout << min(two_cnt, five_cnt) << "\n";

	return 0;
}