#include <bits/stdc++.h>
using namespace std;

int dp[1003];
const int MOD = 10007;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	dp[1] = 1;
	dp[2] = 3;
	
	for (int i = 3; i <= n; i++)
		dp[i] = (dp[i - 1] + 2 * dp[i - 2]) % MOD;

	cout << dp[n] << "\n";
 
	return 0;
}
