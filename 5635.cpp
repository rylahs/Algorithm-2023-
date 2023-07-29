#include <bits/stdc++.h>
using namespace std;

struct Student {
	string name;
	int date, month, year;
};

bool compare(const Student& std1, const Student& std2)
{
	if (std1.year != std2.year)
		return std1.year > std2.year;
	else
	{
		if (std1.month != std2.month)
			return std1.month > std2.month;
		else
		{
			if (std1.date != std2.date)
				return std1.date > std2.date;
			else
				return std1.name < std2.name;
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<Student> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i].name >> v[i].date >> v[i].month >> v[i].year;
	

	sort(v.begin(), v.end(), compare);

	cout << v[0].name << "\n";
	cout << v[n - 1].name << "\n";
		
	return 0;
}