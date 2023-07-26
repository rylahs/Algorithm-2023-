#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int target;
	cin >> target;
	int count = 0;

	int wIdx = 0;
	int rIdx = n - 1;
	sort(arr.begin(), arr.end());
	int sum;
	while (wIdx < rIdx)
	{
		sum = arr[wIdx] + arr[rIdx];
		if (sum == target)
		{
			count++;
			rIdx--;
			wIdx++;
			continue;
		}
		else if (sum < target)
		{
			wIdx++;
			continue;
		}
		else if (sum > target)
		{
			rIdx--;
			continue;
		}
	}



	cout << count << "\n";

	return 0;
}