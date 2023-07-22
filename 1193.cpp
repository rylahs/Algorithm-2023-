#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 1 : 1/1 
	// 2 : 1/2, 2/1
	// 3 : 3/1, 2/2, 1/3
	// 4 : 1/4, 2/3, 3/2, 4/1

	int input;
	cin >> input;

	int k = 1;
	while (true)
	{
		if ((k - 1) * k / 2 < input && input <= k * (k + 1) / 2)
			break;
		k++;
	}

	// even
	if (k % 2 == 0)
	{
		int a = k * (k + 1) / 2;
		cout << k - (a - input) << "/" << a - input + 1;
	}
	else
	{
		int a = k * (k + 1) / 2;
		cout << a - input + 1 << "/" << k - (a - input);
	}




	return 0;
}