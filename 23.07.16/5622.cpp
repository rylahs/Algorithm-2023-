#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int sum = 0;

	for (basic_string<char>::size_type i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'C') sum += 3;
		else if (str[i] >= 'D' && str[i] <= 'F') sum += 4;
		else if (str[i] >= 'G' && str[i] <= 'I') sum += 5;
		else if (str[i] >= 'J' && str[i] <= 'L') sum += 6;
		else if (str[i] >= 'M' && str[i] <= 'O') sum += 7;
		else if (str[i] >= 'P' && str[i] <= 'S') sum += 8;
		else if (str[i] >= 'T' && str[i] <= 'V') sum += 9;
		else if (str[i] >= 'W' && str[i] <= 'Z') sum += 10;
	}

	cout << sum << "\n";

	return 0;
}