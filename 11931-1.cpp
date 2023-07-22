#include <bits/stdc++.h>
using namespace std;

const int MX = 2000000, HALF = MX / 2;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<bool> v(MX + 1);

	int n;
	cin >> n;

	while (n--)
	{
		int input;
		cin >> input;
		v[input + HALF] = true;
	}

	for (int i = MX; i >= 0; i--)
	{
		if (v[i])
			cout << i - HALF << "\n";

	}



	return 0;
}