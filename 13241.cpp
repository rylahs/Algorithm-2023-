#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b, l;
	cin >> a >> b;

	l = lcm(a, b);


	cout << l << "\n";

	return 0;
}
