#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b, c;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		if (a + b <= c || a + c <= b || b + c <= a)
		{
			cout << "Invalid\n";
			continue;
		}
		else
		{
			if (a == b && b == c && c == a)
			{
				cout << "Equilateral\n";
				continue;
			}
			else if (a == b || b == c || c == a)
			{
				cout << "Isosceles\n";
				continue;
			}
			else
				cout << "Scalene\n";
		}
	}


	return 0;
}
