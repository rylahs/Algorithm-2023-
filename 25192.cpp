#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	set<string> st;

	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;

		if (input == "ENTER")
		{
			cnt += st.size();
			st.clear();
		}

		else
			st.insert(input);
	}
	if (!st.empty())
		cnt += st.size();

	cout << cnt << "\n";



	return 0;
}