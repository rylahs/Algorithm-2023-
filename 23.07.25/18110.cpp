#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	if (n == 0)
	{
		cout << 0 << "\n";
		return 0;
	}

	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int up_down = round(n * 0.15);

	double sum = accumulate(v.begin() + up_down, v.end() - up_down, 0);

	int avg = round(sum / (n - up_down * 2));
	
	cout << avg << "\n";
	
	return 0;
}