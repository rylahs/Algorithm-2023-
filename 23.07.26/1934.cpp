#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int a, b;
		cin >> a >> b;
		cout << lcm(a, b) << "\n";
	}

	return 0;
}