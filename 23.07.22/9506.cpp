#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 0;

	while (n != -1)
	{
		cin >> n;

		if (n == -1)
			return 0;

		vector<int> v;

		for (int i = 1; i <= (n / 2) + 1; i++)
		{
			if (n % i == 0)
				v.emplace_back(i);
		}

		int sum = accumulate(v.begin(), v.end(), 0);
		if (sum == n)
		{
			cout << n << " = ";
			for (int i = 0; i < v.size(); i++)
			{
				if (i != v.size() - 1)
					cout << v[i] << " + ";

				else
					cout << v[i] << "\n";
			}
		}
		else
			cout << n << " is NOT perfect.\n";

	}


	return 0;
}