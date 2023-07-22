#include <bits/stdc++.h>
using namespace std;

bool isPrimeNum(int n)
{
	if (n == 1)
		return false;

	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;


	int cnt = 0;

	while (n--)
	{
		int input;
		cin >> input;

		if (isPrimeNum(input))
			cnt++;
	}

	cout << cnt << "\n";
	return 0;
}