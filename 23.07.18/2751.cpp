#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	for (auto& e : v)
		cout << e << "\n";

	return 0;
}