#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str1, str2;
	cin >> str1 >> str2;

	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int num1, num2;
	num1 = stoi(str1);
	num2 = stoi(str2);

	int sum = num1 + num2;
	string sum_str = to_string(sum);
	reverse(sum_str.begin(), sum_str.end());
	sum = stoi(sum_str);

	cout << sum << "\n";
	return 0;
}