#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	for (int i = 1; i <= testCase; i++)
	{
		int a, b;
		cin >> a >> b;

		cout << "Case #" << i << ": " << a + b << "\n";
	}

	return 0;
}