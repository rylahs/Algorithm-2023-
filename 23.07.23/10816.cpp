#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> card_v(n);
	
	for (int i = 0; i < n; i++)
		cin >> card_v[i];

	sort(card_v.begin(), card_v.end());

	int m;
	cin >> m;
	while (m--)
	{
		int find_input;
		cin >> find_input;

		cout << upper_bound(card_v.begin(), card_v.end(), find_input) 
			- lower_bound(card_v.begin(), card_v.end(), find_input) << " ";
	}

	return 0;
}