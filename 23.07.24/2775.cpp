#include <bits/stdc++.h>
using namespace std;

int dp[15][15];
void apart(int k, int n)
{
	for (int i = 0; i <= n; i++)
		dp[0][i] = i;

	for (int i = 1; i <= k; i++) // 세로 층 1층
	{
		for (int j = 1; j <= n; j++) // 가로 호수 1호
		{
			for (int l = 1; l <= j; l++)
			{
				dp[i][j] += dp[i - 1][l];
			}
		}
	}

}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int testCase;
	cin >> testCase;

	apart(14, 14);
	while (testCase--)
	{
		int k, n;
		cin >> k >> n;

		// k = 0, n = n => n명
		// k = 1, n = n => (n(n + 1) / 2) + n명
		// k = 2, n = n => 
		
		cout << dp[k][n] << "\n";
	}

	return 0;
}