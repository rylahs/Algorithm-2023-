#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, v;
	cin >> a >> b >> v;

	int date = 0;

	if (v <= a)
		date = 1;
	else
	{
		if ((v - a) % (a - b) == 0)
			date = (v - a) / (a - b) + 1;
		else
			date = (v - a) / (a - b) + 2;
	}



	cout << date << "\n";

	return 0;
}