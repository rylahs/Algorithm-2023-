#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;


	set<string> st;


	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		st.insert(input);
	}


	int cnt = 0;

	while (m--)
	{
		string tmp;
		cin >> tmp;

		if (st.find(tmp) != st.end())
			cnt++;

	}

	cout << cnt << "\n";
	return 0;
}