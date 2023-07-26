#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int min_distance = 1005;
	min_distance = min({ min_distance, x - 0, w - x, y - 0, h - y });

	cout << min_distance << "\n";
	return 0;
}