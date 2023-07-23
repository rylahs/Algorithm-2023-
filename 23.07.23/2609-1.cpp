#include <bits/stdc++.h>
using namespace std;


int gcd_make(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd_make(b, a % b);
}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	int g_res = gcd_make(n, m);
	int l_res = n * m / g_res;

	cout << g_res << "\n";
	cout << l_res << "\n";


	return 0;
}