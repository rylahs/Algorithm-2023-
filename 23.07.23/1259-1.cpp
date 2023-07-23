#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true)
	{
		string str, reverseStr;
		cin >> str;

		if (str == "0")
			break;
		reverseStr = str;
		reverse(reverseStr.begin(), reverseStr.end());
		if (str == reverseStr)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}


	return 0;
}