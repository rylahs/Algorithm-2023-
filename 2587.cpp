#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 5;

	vector<int> num;
	while (n--)
	{
		int input;
		cin >> input;

		num.emplace_back(input);
	}

	sort(num.begin(), num.end());

	cout << accumulate(num.begin(), num.end(), 0) / 5 << "\n";
	cout << num[2] << "\n";
	return 0;
}