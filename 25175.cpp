#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int n, m, k;
	cin >> n >> m >> k;
	m--;
	k -= 3;

	while (k < 0)
		k += n;

	int res = (m + k) % n + 1;

	cout << res << "\n";


	return 0;
}