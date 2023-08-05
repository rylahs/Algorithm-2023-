#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	while (testCase--)
	{
		int n;
		cin >> n;

		map<string, int> mp;

		for (int i = 0; i < n; i++)
		{
			string wear, category;
			cin >> wear >> category;

			mp[category]++;
		}

		int ans = 1;

		for (auto& e : mp)
			ans *= (e.second + 1);

		ans--;
		
		cout << ans << "\n";
	}
	return 0;
}