#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 0 : 1
	// 1 : 2 3 4 5 6 7 = 6
	// 2 : 8 9 10 11 12 13 14 15 16 17 18 19 = 12
	// 3 : 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 = 18

	int n;
	cin >> n;

	int a = 1;
	int cnt = 1;
	while (n > a)
	{
		a += 6 * cnt;
		cnt++;
	}
	cout << cnt << "\n";


	return 0;
}