#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int danger;
	cin >> danger;

	int res = 0;
	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		if (input == danger)
			res++;
	}

	cout << res << "\n";
	return 0;
}