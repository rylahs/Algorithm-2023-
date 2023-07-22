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
		int r;
		cin >> r;

		int q, d, n, p;

		q = r / 25;
		r %= 25;

		d = r / 10;
		r %= 10;

		n = r / 5;
		r %= 5;

		p = r;

		cout << q << " " << d << " " << n << " " << p << "\n";
	}

	return 0;
}