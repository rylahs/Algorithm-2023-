#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	getline(cin, str);

	int count = 0;
	if (str.empty())
	{
		cout << count;
		return 0;
	}

	count = 1;

	for (basic_string<char>::size_type i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			count++;
	}

	if (str[0] == ' ')
		count--;
	if (str[str.length() - 1] == ' ')
		count--;

	cout << count;
	return 0;
}