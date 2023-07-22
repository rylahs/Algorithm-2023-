#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	long long a, b;
	cin >> a >> b;

	long long min_num = min(a, b);
	long long max_num = max(a, b);

	if (a == b)
		cout << 0 << "\n";
	else
	{
		cout << max_num - min_num - 1 << "\n";

		for (long long i = min_num + 1; i < max_num; i++)
			cout << i << " ";
		cout << "\n";
	}
	return 0;
}