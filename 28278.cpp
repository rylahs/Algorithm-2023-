#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	stack<int> s;

	while (n--)
	{
		int cmd;
		cin >> cmd;

		switch (cmd)
		{

		case 1:
			int input;
			cin >> input;
			s.push(input);
			break;

		case 2:
			if (s.empty())
			{
				cout << -1 << "\n";
				break;
			}
			cout << s.top() << "\n";
			s.pop();
			break;

		case 3:
			cout << s.size() << "\n";
			break;

		case 4:
			if (s.empty())
				cout << 1 << "\n";

			else
				cout << 0 << "\n";
			break;
		case 5:
			if (s.empty())
			{
				cout << -1 << "\n";
				break;
			}
			cout << s.top() << "\n";
			break;
		default:
			break;
		}
	}


	return 0;
}

