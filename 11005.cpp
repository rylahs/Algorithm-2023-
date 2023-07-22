#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	char arr[36] = { '0', '1', '2', '3', '4', '5',
				'6', '7', '8', '9', 'A', 'B',
				'C', 'D', 'E', 'F', 'G', 'H',
				'I', 'J', 'K', 'L', 'M', 'N',
				'O', 'P', 'Q', 'R', 'S', 'T',
				'U', 'V', 'W', 'X', 'Y', 'Z' };

	int n, b;
	cin >> n >> b;

	string str;
	while (n >= b)
	{
		str += arr[n % b];
		n /= b;
	}

	str += arr[n];

	reverse(str.begin(), str.end());

	cout << str << "\n";
	
	return 0;
}