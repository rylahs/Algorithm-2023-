#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	for (int t = 1; t <= testCase; t++)
	{
		string str;
		if (t == 1)
			cin.ignore();
		getline(cin, str);

		vector<string> v;

		string tmp = "";
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] != ' ')
				tmp += str[i];
			else
			{
				v.push_back(tmp);
				tmp = "";
			}
		}
		if (tmp != "")
			v.push_back(tmp);
		reverse(v.begin(), v.end());

		cout << "Case #" << t << ": ";
		for (int i = 0; i < v.size(); i++)
		{
			if (i != v.size() - 1)
				cout << v[i] << " ";
			else
				cout << v[i];
		}
		cout << "\n";
	}

	return 0;
}