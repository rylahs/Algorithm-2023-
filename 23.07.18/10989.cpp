#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(10001, 0);

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v[input]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		while (v[i] > 0)
		{
			cout << i << "\n";
			v[i]--;
		}

	}
	return 0;
}