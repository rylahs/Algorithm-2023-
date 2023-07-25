#include <bits/stdc++.h>
using namespace std;

const int MOD = 1234567891;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int L;
	cin >> L;

	string str;
	cin >> str;

	vector<int> v;
	for (int i = 0; i < L; i++)
	{
		int input = str[i] - 'a' + 1;
		v.push_back(input);
	}

	long long res = 0;
	long long r = 1;
	for (int i = 0; i < L; i++)
	{
		res = (res + (v[i] * r)) % MOD;
		r = (r * 31) % MOD;
	}

	cout << res << "\n";

	return 0;
}