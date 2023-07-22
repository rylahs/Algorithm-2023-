#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;

	while (true)
	{
		int a, b;
		if ((cin >> a >> b).eof() == true)
			break;

		cout << a + b << '\n';
	}

	return 0;
}