#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	if (n == 1) return 1;

	int res = 1;
	for (int i = 2; i <= n; i++)
		res *= i;
	
	return res;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	cout << factorial(n) / (factorial(k) * factorial(n - k));


	return 0;
}