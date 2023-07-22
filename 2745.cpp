#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	int b;
	cin >> b;

	int cnt = 0;
	int res = 0;

	
	for (int i = str.length() - 1; i >= 0; i--)
	{
		int val = 0;
		if (str[i] >= 'A' && str[i] <= 'Z')
			val = str[i] - 'A' + 10;
		else
			val = str[i] - '0';
		

		if (cnt != 0)
		{
			for (int j = 1; j <= cnt; j++)
				val *= b;

			cnt++;
		}
		else
			cnt++;

		res += val;
	}

	cout << res << "\n";
	return 0;
}