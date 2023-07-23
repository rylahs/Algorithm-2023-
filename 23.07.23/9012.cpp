#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int test_case;
	cin >> test_case;

	while (test_case--)
	{
		string str;
		cin >> str;

		stack<char> st;
		bool is_vaild_ps = true;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(')
			{
				st.push(str[i]);
			}
			else
			{
				if (st.empty())
				{
					is_vaild_ps = false;
					break;
				}
				else
				{
					if (st.top() == '(')
						st.pop();
					else
					{
						is_vaild_ps = false;
						break;
					}
				}
			}
		}

		if (is_vaild_ps && st.empty())
			cout << "YES\n";
		else
			cout << "NO\n";

	}

	return 0;
}