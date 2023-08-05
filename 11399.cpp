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

	sort(v.begin(), v.end());


	vector<int> v2;
	for (int i = 0; i < v.size(); i++)
	{
		int sum = 0;
		for (int j = 0; j <= i; j++)
		{
			sum += v[j];
		}

		v2.push_back(sum);
	}

	cout << accumulate(v2.begin(), v2.end(), 0) << "\n";
	
	return 0;
}