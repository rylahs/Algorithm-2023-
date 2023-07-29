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
		int p;
		cin >> p;
		vector<pair<int, string>> v(p);
		for (int i = 0; i < p; i++)
			cin >> v[i].first >> v[i].second;
		
		sort(v.begin(), v.end(), greater<>());
		cout << v[0].second << "\n";
	}

	return 0;
}