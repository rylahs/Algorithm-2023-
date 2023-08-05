#include <bits/stdc++.h>
using namespace std;

bool compare(const string& a, const string& b)
{
	if (a.length() != b.length())
		return a.length() < b.length();
	else
	{
		int a_sum = 0, b_sum = 0;
		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] >= '0' && a[i] <= '9')
				a_sum += a[i] - '0';
		}
		for (int i = 0; i < b.length(); i++)
		{
			if (b[i] >= '0' && b[i] <= '9')
				b_sum += b[i] - '0';
		}
		
		if (a_sum != b_sum)
			return a_sum < b_sum;
		else
		{
			return a < b;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<string> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end(), compare);

	for (auto& e : v)
		cout << e << "\n";

	return 0;
}