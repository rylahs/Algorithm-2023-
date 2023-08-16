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
		int testCaseNum;
		cin >> testCaseNum;

		int res = 0;

		vector<int> v(20);

		for (int i = 0; i < 20; i++)
			cin >> v[i];

		for (int i = 1; i < 20; i++)
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (v[j] > v[i])
					res++;
			}
		}

		cout << testCaseNum << " " << res << "\n";
	}
	return 0;
}