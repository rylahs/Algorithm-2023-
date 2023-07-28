#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	long long s;
	cin >> s;

	long long tmp = 1;

	// n ( n + 1) / 2
	for (long long i = 1; i <= s; i++)
	{
		if (i * (i + 1) / 2 > s)
		{
			tmp = i - 1;
			break;
		}
	}

	cout << tmp << "\n";

	return 0;
}