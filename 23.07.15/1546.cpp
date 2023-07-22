#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<double> score;

	for (int i = 0; i < n; i++)
	{
		int input; cin >> input;
		score.emplace_back(input);
	}

	double max_score = (double)*max_element(score.begin(), score.end());

	for (vector<int>::size_type i = 0; i < score.size(); i++)
	{
		score[i] = (score[i] / max_score) * 100;
	}

	double avg = 0.0;
	double sum = 0;
	for (auto e : score)
		sum += e;
	avg = sum / n;
	cout.precision(12);
	cout << avg << "\n";
	return 0;
}