#include <bits/stdc++.h>
using namespace std;

struct Compare
{
	bool operator() (const string& str1, const string& str2) const
	{
		if (str1.length() == str2.length())
			return str1 < str2;
		else
			return str1.length() < str2.length();
	}
};

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<string, Compare> st;
	string tmp;

	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		st.emplace(tmp);
	}

	for (auto& e : st)
		cout << e << "\n";


	return 0;
}