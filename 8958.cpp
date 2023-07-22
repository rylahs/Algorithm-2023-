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

		int sum = 0;
		int cnt_correct = 1;

		if (str[0] == 'O')
			sum += cnt_correct++;

		for (basic_string<char>::size_type i = 1; i < str.length(); i++)
		{
			if (str[i] == 'X')
			{
				cnt_correct = 1;
			}
			if (str[i] == 'O')
				sum += cnt_correct++;

		}

		cout << sum << "\n";
	}

	return 0;
}