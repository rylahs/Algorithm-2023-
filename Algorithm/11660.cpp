#include <bits/stdc++.h>
using namespace std;

int arr[1030][1030];

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	int x1, x2, y1, y2;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			arr[i][j] += arr[i - 1][j];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			arr[i][j] += arr[i][j - 1];

	for (int i = 0; i < m; i++) 
	{
		cin >> x1 >> y1 >> x2 >> y2;

		cout << arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y1 - 1] << "\n";
	}

	return 0;
}