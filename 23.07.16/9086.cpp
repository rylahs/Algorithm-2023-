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

		cout << str[0] << str[str.length() - 1];
		cout << "\n";
	}


	return 0;
}