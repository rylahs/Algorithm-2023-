#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int k;
	cin >> k;

	for (int t = 1; t <= k; t++)
	{
		int n;
		cin >> n;
		vector<int> score(n);
		int min_score = 103;
		int max_score = -1;
		
		for (int i = 0; i < n; i++)
		{
			cin >> score[i];
			min_score = min(min_score, score[i]);
			max_score = max(max_score, score[i]);
		}
			
		sort(score.begin(), score.end(), greater<>());

		int max_gap = -1;
		for (int i = 0; i < n - 1; i++)
		{
			int j = i + 1;
			int gap = score[i] - score[j];
			max_gap = max(max_gap, gap);
		}

		cout << "Class " << t << "\n";
		cout << "Max " << max_score << ", Min "
			<< min_score << ", Largest gap " << max_gap << "\n";

	}
	return 0;
}