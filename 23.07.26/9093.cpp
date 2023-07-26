#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int testCase;
	cin >> testCase;

	for (int t = 0; t < testCase; t++)
	{
		string str;
		if (t == 0)
			cin.ignore();
		getline(cin, str);

		string tmp = "";
		vector<string> v;
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

		for (int i = 0; i < v.size(); i++)
			reverse(v[i].begin(), v[i].end());
		
		for (auto& e : v)
			cout << e << " ";
		cout << "\n";

	}

	return 0;
}