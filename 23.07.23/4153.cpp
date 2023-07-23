#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a = -1, b = -1, c = -1;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)
			break;

		bool is_triangle = false;

		int a2 = pow(a, 2);
		int b2 = pow(b, 2);
		int c2 = pow(c, 2);

		if (a2 + b2 == c2 || b2 + c2 == a2 || a2 + c2 == b2)
			is_triangle = true;

		if (is_triangle)
			cout << "right\n";
		else
			cout << "wrong\n";
	}

	return 0;
}