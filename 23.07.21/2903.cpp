#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	// 0 : 4 
	// 1 : 4 + 5 = 9
	// 2 : 9 + 16 = 25
	// 3 : 25 + 56 = 81
	// 4 : 

	// 0 : 2
	// +1
	// 1 : 3
	// +2
	// 2 : 5
	// +4
	// 3 : 9
	// +8
	// 4 : 17
	// +16
	// 5 : 33

	long long res = 2;
	int i = 1;
	while (i <= n)
	{
		res += pow(2, i - 1);
		i++;
	}

	cout << res * res << "\n";
	return 0;
}