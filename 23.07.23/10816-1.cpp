#include <bits/stdc++.h>
using namespace std;

int lower(const vector<int>& v, int x)
{
	int st = 0;
	int end = v.size() - 1;

	while (st < end)
	{
		int middle = (st + end) / 2;

		if (v[middle] < x)	st = middle + 1;
		else				end = middle;

	}
	return st;
}

int upper(const vector<int>& v, int x)
{
	int st = 0;
	int end = v.size() - 1;

	while (st < end)
	{
		int middle = (st + end) / 2;

		if (v[middle] <= x)	st = middle + 1;
		else				end = middle;

	}
	return st;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> card_v(n + 1);

	for (int i = 0; i < n; i++)
		cin >> card_v[i];

	sort(card_v.begin(), card_v.end() - 1);

	int m;
	cin >> m;
	while (m--)
	{
		int find_input;
		cin >> find_input;

		cout << upper(card_v, find_input) - lower(card_v, find_input) << " ";
	}

	return 0;
}