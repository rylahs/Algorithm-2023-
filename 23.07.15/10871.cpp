#include <bits/stdc++.h>
using namespace std;

int num[202];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, x;
	cin >> n >> x;

	vector<int> v;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		if (input < x)
			v.emplace_back(input);
	}

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}

	return 0;
}