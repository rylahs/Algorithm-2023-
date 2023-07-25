#include <bits/stdc++.h>
using namespace std;

bool compare(const pair<int, int>& a, const pair<int, int>& b)
{
	if (a.first == b.first)
		return a.second < b.second;
 	return a.first > b.first;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	int mx_value = -4001;
	int mn_value = 4001;

	int arr[8002] = { 0, };
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];

		mx_value = max(mx_value, v[i]);
		mn_value = min(mn_value, v[i]);

		arr[v[i] + 4000]++;
	}

	vector<pair<int, int>> cnt_vector;
	for (int i = 0; i < 8002; i++)
	{
		if (arr[i] != 0)
			cnt_vector.push_back({ arr[i], i - 4000 });
	}

	sort(v.begin(), v.end(), less<>());
	stable_sort(cnt_vector.begin(), cnt_vector.end(), compare);
	int sum = accumulate(v.begin(), v.end(), 0);
	int avg = round((double)sum / n);
	int middle = v[n / 2];
	int freq_num = 0;
	int range = mx_value - mn_value;
	if (n == 1)
		freq_num = cnt_vector[0].second;

	else
	{
		if (cnt_vector[0].first == cnt_vector[1].first)
			freq_num = cnt_vector[1].second;
		else
			freq_num = cnt_vector[0].second;
	}

	

	cout << avg << "\n";
	cout << middle << "\n";
	cout << freq_num << "\n";
	cout << range << "\n";

	return 0;
}