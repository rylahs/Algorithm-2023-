#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> oddNum;

	int n = 7;
	while (n--)
	{
		int input;
		cin >> input;

		if (input % 2 != 0)
			oddNum.emplace_back(input);
	}

	if (oddNum.empty())
		cout << -1 << "\n";
	else
	{
		int sum = accumulate(oddNum.begin(), oddNum.end(), 0);
		int minOddNum = *min_element(oddNum.begin(), oddNum.end());

		cout << sum << "\n" << minOddNum << "\n";

	}

	return 0;
}