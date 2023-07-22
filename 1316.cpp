#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int cnt = 0;
	while (n--)
	{
		vector<int> alpha(26, 0);

		bool isGroupWord = true;
		
		string str;
		cin >> str;

		for (int i = 0; i < str.length(); i++)
		{
			if (i + 1 < str.length() && alpha[str[i] - 'a'] == 0)
			{
				if (str[i] == str[i + 1])
					continue;
				alpha[str[i] - 'a']++;
				continue;
			}

			if (alpha[str[i] - 'a'] != 0)
			{
				isGroupWord = false;
				break;
			}
		}
		
		if (isGroupWord)
			cnt++;

	}


	cout << cnt << "\n";
	return 0;
}