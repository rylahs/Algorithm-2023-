#include <bits/stdc++.h>
using namespace std;

int cost[10002];
int dp[10002];

int solve(int n)
{
	for (int i = 1; i <= n; i++)
	{
		dp[i] = cost[i];
		for (int j = 1; j <= i; j++)
			dp[i] = min(dp[i], dp[i - j] + dp[j]);
	}
	
	return dp[n];
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> cost[i];

	int res = solve(n);
	cout << res << "\n";
	return 0;
}