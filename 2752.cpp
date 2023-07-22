#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	set<int, less<int>> st;

	for (int i = 0; i < 3; i++)
	{
		int input;
		cin >> input;
		st.emplace(input);
	}

	for (auto& e : st)
		cout << e << " ";

	return 0;
}