#include <bits/stdc++.h>
using namespace std;

string ans1[8] = { "WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW"
};

string ans2[8] = { "BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB",
				"BWBWBWBW",
				"WBWBWBWB"
};

int cnt_ans1(int x, int y, const vector<string>& v)
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (v[x + i][y + j] != ans1[i][j])
				cnt++;
		}
	}
	return cnt;
}
int cnt_ans2(int x, int y, const vector<string>& v)
{
	int cnt = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (v[x + i][y + j] != ans2[i][j])
				cnt++;
		}
	}
	return cnt;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	
	vector<string> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	int diff_mx = 65;


	for (int i = 0; i + 8 <= n; i++) // 0 ~ ? ( 시작 y)
	{
		for (int j = 0; j + 8 <= m; j++) // 0 ~  ( 시작 x)
		{
			diff_mx = min(diff_mx, min(cnt_ans1(i, j, v), cnt_ans2(i, j, v)));
		}
	}

	cout << diff_mx << "\n";
	return 0;
}