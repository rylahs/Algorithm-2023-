#include <bits/stdc++.h>
using namespace std;

int num[202];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		num[input + 100]++;
	}

	int findNum;
	cin >> findNum;

	cout << num[findNum + 100] << "\n";

	return 0;
}