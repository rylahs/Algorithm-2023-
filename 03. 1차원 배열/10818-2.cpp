#include <bits/stdc++.h>
using namespace std;

int num[202];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int max_val = -1000002;
	int min_val = 1000002;

	while (n--)
	{
		int input;
		cin >> input;
		if (max_val < input) max_val = input;
		if (min_val > input) min_val = input;
	}

	cout << min_val << " " << max_val;
	return 0;
}