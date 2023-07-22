#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 3;

	while (n--)
	{
		int sum = 0;
		int input;
		for (int i = 0; i < 4; i++)
		{
			cin >> input;
			sum += input;
		}

		switch (sum)
		{
		case 0:
			cout << "D\n";
			break;
		case 1:
			cout << "C\n";
			break;
		case 2:
			cout << "B\n";
			break;
		case 3:
			cout << "A\n";
			break;
		case 4:
			cout << "E\n";
			break;
		}
	}

	return 0;
}