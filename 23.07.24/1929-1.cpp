#include <bits/stdc++.h>
using namespace std;

bool isPrimeNumRootSolve(int n)
{
	if (n < 2)
		return false;
	else
	{
		for (int i = 2; i * i <= n; i++)
		{
			if (n % i == 0)
				return false;
		}
		return true;
	}

}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	for (int i = m; i <= n; i++)
	{
		if (isPrimeNumRootSolve(i) == true)
			cout << i << '\n';
	}
	return 0;
}