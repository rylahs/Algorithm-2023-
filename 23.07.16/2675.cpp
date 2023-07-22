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
		int R;
		string str;
		cin >> R >> str;

		for (basic_string<char>::size_type i = 0; i < str.length(); i++)
		{
			int r_cpy = R;
			while (r_cpy--)
			{
				cout << str[i];
			}
		}
		cout << "\n";
	}

	return 0;
}