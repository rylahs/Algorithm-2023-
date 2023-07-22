#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int cnt = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (i + 1 < str.length() && str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-'))
		{
			cnt++;
			i++;
			continue;
		}

		else if (i + 2 < str.length() && str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
		{
			cnt++;
			i += 2;
			continue;
		}

		else if (i + 1 < str.length() && str[i] == 'd' && str[i + 1] == '-')
		{
			cnt++;
			i++;
			continue;
		}

		else if (i + 1 < str.length() && str[i] == 'l' && str[i + 1] == 'j')
		{
			cnt++;
			i++;
			continue;
		}

		else if (i + 1 < str.length() && str[i] == 'n' && str[i + 1] == 'j')
		{
			cnt++;
			i++;
			continue;
		}

		else if (i + 1 < str.length() && str[i] == 's' && str[i + 1] == '=')
		{
			cnt++;
			i++;
			continue;
		}

		else if (i + 1 < str.length() && str[i] == 'z' && str[i + 1] == '=')
		{
			cnt++;
			i++;
			continue;
		}
		else
			cnt++;

	}
	cout << cnt << "\n";
	return 0;
}