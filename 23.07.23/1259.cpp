#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string str = "1";
	while (str != "0")
	{
		cin >> str;
		if (str == "0")
			break;

		int st = 0, end = str.length() - 1;
		bool is_palindrome = true;

		while (st <= end)
		{
			if (str[st] != str[end])
			{
				is_palindrome = false;
				break;
			}
			else
			{
				st++;
				end--;
			}
		}
		if (is_palindrome) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}