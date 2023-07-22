#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	bool isPalindrome = true;

	int low = 0;
	int high = str.length() - 1;

	while (low < high)
	{
		if (str[low] != str[high])
		{
			isPalindrome = false;
			break;
		}
		low++;
		high--;
	}

	cout << isPalindrome << "\n";
	return 0;
}