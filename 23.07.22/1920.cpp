#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	vector<int> v(n, 0);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	
	sort(v.begin(), v.end());

	int m;
	cin >> m;

	while (m--)
	{
		int input;
		cin >> input;

		bool is_find = binary_search(v.begin(), v.end(), input);
		if (is_find)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";

	}
	
	return 0;
}