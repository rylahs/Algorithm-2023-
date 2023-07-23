#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	int g_res = gcd(n, m);
	int l_res = lcm(n, m);

	cout << g_res << "\n";
	cout << l_res << "\n";


	return 0;
}