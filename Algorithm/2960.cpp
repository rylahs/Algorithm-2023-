#include <bits/stdc++.h>
using namespace std;


int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, k;
	int cnt = 0;

	cin >> n >> k;
	
	vector<bool> isPrime(n + 1, true);

	
	for (int i = 2; i <= n; i++)
	{
		for (int j = i; j <= n; j += i)
		{
			if (isPrime[j])
			{
				isPrime[j] = false;
				cnt++;
				if (cnt == k)
				{
					cout << j << '\n';
					return 0;
				}
			}
		}
	}

	return 0;
}