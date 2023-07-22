#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	deque<int> dq;

	int n;
	cin >> n;

	while (n--)
	{
		string cmd;
		cin >> cmd;

		if (cmd == "push_front")
		{
			int input;
			cin >> input;
			dq.push_front(input);
		}
		else if (cmd == "push_back")
		{
			int input;
			cin >> input;
			dq.push_back(input);
		}
		else if (cmd == "pop_front")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (cmd == "pop_back")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (cmd == "size")
		{
			cout << dq.size() << "\n";
		}
		else if (cmd == "empty")
		{
			if (dq.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (cmd == "front")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.front() << "\n";

		}
		else // back
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.back() << "\n";

		}

	}


	return 0;
}