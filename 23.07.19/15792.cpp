#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	cout << int(a / b) << ".";
	a %= b;
	for (int i = 0; i < 1001; i++)
	{
		a *= 10;
		cout << a / b;
		a = a - (a / b) * b;
	}

	return 0;
}