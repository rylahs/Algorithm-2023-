#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	/*
	n = 1 -> 4
	n = 2 -> 1 + 2 + 2 + 2 + 1 = 8
	n = 3 -> 1 + 3 + 3 + 3 + 1 + 1 = 12
	n = 4 -> 1 + 4 + 4 + 4 + 1 + 1 + 1 = 16
	n = 5 -> 1 + 5 + 5 + 5 + 1 + 1 + 1 + 1 = 20
	*/

	long long n;
	cin >> n;

	long long res = n * 4;

	cout << res << "\n";

	return 0;
}