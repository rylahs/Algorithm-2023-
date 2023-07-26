#include <bits/stdc++.h>
using namespace std;

struct Student 
{
	string name;
	int kor;
	int eng;
	int math;
};

bool compare(const Student& a, const Student& b)
{
	if (a.kor != b.kor)
		return a.kor > b.kor;
	else
	{
		if (a.eng != b.eng)
			return a.eng < b.eng;
		else
		{
			if (a.math != b.math)
				return a.math > b.math;
			else
				return a.name < b.name;
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
	{
		string name;
		int kor, eng, math;
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
	}

	sort(v.begin(), v.end(), compare);

	for (auto& e : v)
		cout << e.name << "\n";

	return 0;
}