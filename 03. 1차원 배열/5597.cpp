#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(31, 0);

	for (int i = 0; i < 28; i++)
	{
		int input;
		cin >> input;

		v[input]++;
	}

	for (vector<int>::size_type i = 1; i < v.size(); i++)
	{
		if (v[i] == 0)
			cout << i << "\n";
	}

	return 0;
}