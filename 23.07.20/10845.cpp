#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	stack<int> st;

	while (n--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push")
		{
			int input;
			cin >> input;
			st.push(input);
		}
		else if (cmd == "top")
		{
			if (st.empty())
				cout << -1 << "\n";
			else
				cout << st.top() << "\n";
		}
		else if (cmd == "size")
		{
			cout << st.size() << "\n";
		}
		else if (cmd == "empty")
		{
			if (st.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (cmd == "pop")
		{
			if (st.empty())
			{
				cout << -1 << "\n";
			}
			else
			{
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else
		{

		}
	}

	return 0;
}