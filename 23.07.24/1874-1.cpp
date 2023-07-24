#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> seq(n);
	for (int i = 0; i < n; i++)
		cin >> seq[i];

	int cnt = 0;
	vector<int> v;
	vector<char> ans;
	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
		ans.push_back('+');

		while (!v.empty() && v.back() == seq[cnt])
		{
			v.pop_back();
			ans.push_back('-');
			cnt++;
		}
	}

	if (!v.empty())
		cout << "NO\n";
	else
		for (auto& e : ans)	cout << e << "\n";


	return 0;
}