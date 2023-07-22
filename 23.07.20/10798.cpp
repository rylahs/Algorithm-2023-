#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	char a[5][16] = { '\0', };

	for (int i = 0; i < 5; i++)
		cin >> a[i];

	for (int j = 0; j < 15; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			if (a[i][j] != '\0')
				cout << a[i][j];
		}
	}


	return 0;
}