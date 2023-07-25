#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	stack<int> st;

	while (k--)
	{
		int input;
		cin >> input;

		if (input != 0)
			st.push(input);

		else
		{
			if (st.empty())
				break;
			else
				st.pop();
		}
	}

	int res = 0;
	while (!st.empty())
	{
		int cur = st.top();
		res += cur;
		st.pop();
	}

	cout << res << "\n";
	

	return 0;
}