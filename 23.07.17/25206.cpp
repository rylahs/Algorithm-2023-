#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n = 20;

	double sum = 0;
	double score_sum = 0;
	while (n--)
	{
		string name;
		double score;
		string grade;

		cin >> name >> score >> grade;

		score_sum += score;

		double grade_score = 0;
		if (grade == "A+") grade_score = 4.5;
		else if (grade == "A0")	grade_score = 4.0;
		else if (grade == "B+")	grade_score = 3.5;
		else if (grade == "B0")	grade_score = 3.0;
		else if (grade == "C+")	grade_score = 2.5;
		else if (grade == "C0")	grade_score = 2.0;
		else if (grade == "D+")	grade_score = 1.5;
		else if (grade == "D0")	grade_score = 1.0;
		else if (grade == "F") grade_score = 0.0;
		else if (grade == "P")
			score_sum -= score;

		if (grade != "P")
			sum += grade_score * score;
	}
	cout.precision(7);
	cout << sum / score_sum << "\n";

	return 0;
}