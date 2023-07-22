#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	list<char> li;
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
		li.emplace_back(input[i]);

	int m;
	cin >> m;

	auto cursor = li.end();
	while (m--)
	{
		char cmd;
		cin >> cmd;
		switch (cmd)
		{
		case 'B':
			if (cursor != li.begin())
			{
				cursor--;
				cursor = li.erase(cursor);
			}
			else
				continue;
			break;
		case 'D':
			if (cursor != li.end())
				cursor++;
			else
				continue;
			break;
		case 'L':
			if (cursor != li.begin())
				cursor--;
			else
				continue;
			break;
		case 'P':
			char x;
			cin >> x;
			li.insert(cursor, x);
			break;
		}

	}
	for (auto& e : li)
		cout << e;


	return 0;
}