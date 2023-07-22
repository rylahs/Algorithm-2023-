#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> v(8, 0);
	bool asc = false;
	bool desc = false;
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		int input;
		cin >> input;

		v[i] = input;
	}

	if (v[0] == 1)
		asc = true;
	else if (v[0] == 8)
		desc = true;
	else {}

	if (asc == true)
	{
		for (vector<int>::size_type i = 1; i < v.size(); i++)
		{
			if (v[i] != i + 1)
			{
				asc = false;
				break;
			}
				
		}
	}
	if (desc == true)
	{
		for (vector<int>::size_type i = 1; i < v.size(); i++)
		{
			if (v[i] + i != 8)
			{
				desc = false;
				break;
			}
				
		}
	}

	if (asc == false && desc == false)
		cout << "mixed\n";
	else if (asc == true && desc == false)
		cout << "ascending\n";
	else if (asc == false && desc == true)
		cout << "descending\n";
	else
	{ }


	return 0;
}