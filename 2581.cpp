#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumber(int n)
{
	if (n == 1)
		return false;

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0) return false;

	return true;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	int sum = 0;
	int min_value = 10001;

	for (int i = m; i <= n; i++)
	{
		if (isPrimeNumber(i))
		{
			sum += i;
			min_value = min(min_value, i);
		}
	}

	if (sum == 0)
		cout << -1;
	else
		cout << sum << "\n" << min_value << "\n";

	return 0;
}