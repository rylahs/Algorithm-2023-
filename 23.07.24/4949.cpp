#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	
	while (true)
	{
		string str;
		getline(cin, str);
		if (str == ".")
			return 0;

		bool is_balanced = true;
		stack<char> st;

		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(' || str[i] == '[')
				st.push(str[i]);

			else if (str[i] == ')')
			{
				if (st.empty() || st.top() != '(')
				{
					is_balanced = false;
					break;
				}
				else
					st.pop();
			}
			else if (str[i] == ']')
			{
				if (st.empty() || st.top() != '[')
				{
					is_balanced = false;
					break;
				}
				else
					st.pop();
			}
		}

		if (is_balanced && st.empty())
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}