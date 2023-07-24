#include <bits/stdc++.h>
using namespace std;

int ans[12];

void solve()
{
	ans[1] = 1;
	ans[2] = 2;
	ans[3] = 4;

	for (int i = 4; i <= 11; i++)
		ans[i] = ans[i - 1] + ans[i - 2] + ans[i - 3];

}
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	

	
	int testCase;
	cin >> testCase;

	solve();

	while (testCase--)
	{
		int n;
		cin >> n;

		cout << ans[n] << "\n";
	}

	return 0;
}