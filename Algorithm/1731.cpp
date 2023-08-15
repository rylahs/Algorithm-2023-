#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;


	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	

	if (v[1] - v[0] == v[2] - v[1])
		cout << v[n - 1] + (v[1] - v[0]) << "\n";
	else
		cout << v[n - 1] * (v[1] / v[0]) << "\n";

	return 0;
}