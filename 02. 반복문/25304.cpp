#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int X;
	cin >> X;

	int n;

	cin >> n;

	while (n--)
	{
		int a, b;
		cin >> a >> b;
		X -= a * b;
	}

	if (X == 0)
		cout << "Yes\n";
	else
		cout << "No\n";
	return 0;
}