#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	string str;
	cin >> str;

	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += str[i] - '0';

	cout << sum << "\n";
	return 0;
}