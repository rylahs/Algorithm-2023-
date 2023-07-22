#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	vector<int> alpha(26, -1);

	for (basic_string<char>::size_type i = 0; i < str.length(); i++)
	{
		if (alpha[str[i] - 'a'] == -1)
			alpha[str[i] - 'a'] = i;
	}

	for (auto e : alpha)
		cout << e << " ";
	return 0;
}