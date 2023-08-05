#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	set<string> st;
	for (int i = 0; i < str.length(); i++)
	{
		string tmp = "";
		for (int j = i; j < str.length(); j++)
		{
			tmp += str[j];
		}
		st.insert(tmp);
	}

	for (auto& e : st)
		cout << e << "\n";
	return 0;
}