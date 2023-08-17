#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<string> v;
	int n = 8;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		v.push_back(input);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == 0)
			{
				if (j % 2 == 0 && v[i][j] == 'F')
					cnt++;
			}
			else
			{
				if (j % 2 == 1 && v[i][j] == 'F')
					cnt++;
			}
		}
	}

	cout << cnt << "\n";
	return 0;
}