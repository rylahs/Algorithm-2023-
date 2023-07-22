#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int hour, minute; // 0 <= hour <= 23, 0 <= minute <= 59

	cin >> hour >> minute;

	int new_min = minute - 45;

	if (new_min < 0)
	{
		hour--;
		if (hour < 0)
			hour += 24;
		new_min += 60;
	}

	cout << hour << " " << new_min << "\n";


	return 0;
}