#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int l, p, v;

	int cnt = 1;
	while (true)
	{
		cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0)
			break;

		cout << "Case " << cnt++ << ": " << v / p * l + min(v % p, l) << "\n";

	}

	return 0;
}