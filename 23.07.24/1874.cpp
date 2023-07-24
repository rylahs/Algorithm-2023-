#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	stack<int> st;
	int cnt = 0;

	string ans = "";

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		while (cnt < input)
		{
			ans += "+";
			st.push(++cnt);
		}


		if (st.top() != input)
		{
			cout << "NO\n";
			return 0;
		}

		st.pop();
		ans += "-";
	}

	for (auto& e : ans)
		cout << e << "\n";

	return 0;
}