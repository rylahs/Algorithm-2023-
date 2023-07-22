#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<int> st;
	while (n--)
	{
		int input;
		cin >> input;

		st.emplace(input);
	}

	for (auto& e : st)
		cout << e << "\n";

	return 0;
}