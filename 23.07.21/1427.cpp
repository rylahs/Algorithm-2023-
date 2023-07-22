#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<char> c;

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
		c.emplace_back(str[i]);

	sort(c.begin(), c.end(), greater<>());

	for (auto& e : c)
		cout << e;

	return 0;
}