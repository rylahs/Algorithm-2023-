#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v;

	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;

		if (input <= 40)
			v.emplace_back(40);
		else
			v.emplace_back(input);
	}

	cout << accumulate(v.begin(), v.end(), 0) / 5 << "\n";
	



	return 0;
}