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
		v.emplace_back(input * input);
	}

	cout << accumulate(v.begin(), v.end(), 0) % 10 << "\n";

	return 0;
}