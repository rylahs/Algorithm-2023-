#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	while (n > 1)
	{
		int cnt = 2;
		while (n % cnt != 0)
		{
			cnt++;
		}
		n /= cnt;

		cout << cnt << "\n";
	}

	return 0;
}