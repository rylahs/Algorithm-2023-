#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	while (a != 0 && b != 0)
	{
		cout << a + b << "\n";
		cin >> a >> b;
	}

	return 0;
}