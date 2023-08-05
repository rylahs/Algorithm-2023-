#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(3);

	for (int i = 0; i < 3; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int res = 0;
	if (v[2] >= v[1] + v[0])
		res = (v[0] + v[1]) * 2 - 1;
	else
		res = v[0] + v[1] + v[2];

	cout << res << "\n";


	return 0;
}
