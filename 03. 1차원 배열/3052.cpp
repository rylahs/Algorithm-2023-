#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	set<int> st;

	int input_size = 10;
	for (int i = 0; i < input_size; i++)
	{
		int input;
		cin >> input;

		st.emplace(input % 42);
	}

	cout << st.size();
	return 0;
}