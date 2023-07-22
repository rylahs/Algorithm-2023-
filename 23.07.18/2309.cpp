#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> nine;
	vector<int> seven;

	for (int i = 0; i < 9; i++)
	{
		int input;
		cin >> input;

		nine.emplace_back(input);
	}

	for (int i = 0; i < (int)nine.size(); i++)
	{
		for (int j = 0; j < (int)nine.size(); j++)
		{
			if (i == j) continue;
			seven.clear();

			for (int k = 0; k < (int)nine.size(); k++)
			{
				if (i == k || j == k) continue;
				seven.emplace_back(nine[k]);
			}

			if (accumulate(seven.begin(), seven.end(), 0) == 100)
				break;
		}
		if (accumulate(seven.begin(), seven.end(), 0) == 100)
			break;
	}
	sort(seven.begin(), seven.end());

	for (auto& e : seven)
		cout << e << "\n";

	return 0;
}