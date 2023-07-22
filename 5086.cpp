#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = -1, b = -1;
	while (a != 0 && b != 0)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
			break;
		bool factor = false;
		bool multiple = false;

		if (a < b)
		{
			if (b % a == 0)
				factor = true;
		}

		else
		{
			if (a % b == 0)
				multiple = true;
		}

		if (factor)
			cout << "factor" << "\n";
		else if (multiple)
			cout << "multiple" << "\n";
		else
			cout << "neither" << "\n";

	}

	return 0;
}