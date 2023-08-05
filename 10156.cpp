#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k, n, m;
	cin >> k >> n >> m;

	int consum = k * n;

	if (consum > m)
		cout << consum - m << "\n";
	else
		cout << 0 << "\n";

	return 0;
}