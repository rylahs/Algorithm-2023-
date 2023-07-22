#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string str_a, str_b;
	cin >> str_a >> str_b;

	reverse(str_a.begin(), str_a.end());
	reverse(str_b.begin(), str_b.end());

	int a = stoi(str_a);
	int b = stoi(str_b);

	cout << max(a, b) << "\n";
	return 0;
}