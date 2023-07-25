#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	int cnt = 0;
	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			cnt += (n / 5);
			cout << cnt << "\n";
			return 0;
		}
		n -= 3;
		cnt++;
	}

	cout << -1 << "\n";
	
	return 0;
}