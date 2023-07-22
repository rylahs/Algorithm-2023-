#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v;
	while (n--)
	{
		int input;
		cin >> input;

		v.emplace_back(input);
	}

	sort(v.begin(), v.end());

	for (auto& e : v)
		cout << e << "\n";

	return 0;
}