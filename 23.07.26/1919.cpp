#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[26] = { 0, };

	string str1, str2;
	cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++)
		arr[str1[i] - 'a']++;
	
	for (int i = 0; i < str2.length(); i++)
		arr[str2[i] - 'a']--;

	int gap = 0;
	for (int i = 0; i < 26; i++)
		gap += abs(arr[i]);

	cout << gap << "\n";

}