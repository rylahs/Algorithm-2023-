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
		string str;
		cin >> str;
		int a = str[0] - '0';
		int b = str[2] - '0';

		int sum = a + b;
		cout << sum << "\n";
	}

	return 0;
}