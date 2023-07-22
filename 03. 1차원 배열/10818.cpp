#include <bits/stdc++.h>
using namespace std;

int num[202];

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

	cout << *min_element(v.begin(), v.end()) << " " << *max_element(v.begin(), v.end());

	return 0;
}