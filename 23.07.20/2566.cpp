#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int maxV = -1;
	int maxY = -1;
	int maxX = -1;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			int value;
			cin >> value;
			if (value > maxV)
			{
				maxV = value;
				maxX = j + 1;
				maxY = i + 1;
			}

		}
	}

	cout << maxV << "\n" << maxY << " " << maxX << "\n";
	return 0;
}