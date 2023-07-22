#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str;
	cin >> str;

	vector<int> alpha(26, 0);

	for (basic_string<char>::size_type i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 0x20;

		alpha[str[i] - 'a']++;
	}

	int max_value = *max_element(alpha.begin(), alpha.end());
	int max_cnt = 0;
	for (auto e : alpha)
	{
		if (e == max_value)
			max_cnt++;
	}
	
	if (max_cnt > 1)
		cout << "?\n";
	else
		cout << static_cast<char>(max_element(alpha.begin(), alpha.end()) - alpha.begin() +'A') << "\n";

	return 0;
}