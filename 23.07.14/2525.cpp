#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	int plus_hour = c / 60;
	int plus_min = c % 60;

	a += plus_hour;
	b += plus_min;

	if (b >= 60)
	{
		b -= 60;
		a++;
	}

	if (a >= 24)
		a %= 24;

	cout << a << " " << b << "\n";
	return 0;
}