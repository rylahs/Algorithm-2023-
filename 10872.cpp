#include <bits/stdc++.h>
using namespace std;

int factorial[13];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	factorial[0] = 1;

	for (int i = 1; i <= n; i++)
		factorial[i] = i * factorial[i - 1];

	cout << factorial[n] << "\n";
	return 0;
}