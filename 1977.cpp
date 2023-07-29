#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int m, n;
	cin >> m >> n;

	int range_min = (int)ceil(sqrt(m));
	int range_max = (int)sqrt(n);

	long long min_value = pow(10000, 2) + 2;
	long long sum = 0;
	vector<long long> v; 
	for (int i = range_min; i <= range_max; i++)
		v.push_back(pow(i, 2));

	if (v.empty())
		cout << -1 << "\n";
	else
	{
		min_value = *min_element(v.begin(), v.end());
		sum = accumulate(v.begin(), v.end(), 0);

		cout << sum << "\n";
		cout << min_value << "\n";
	}
	return 0;
}