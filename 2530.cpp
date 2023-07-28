#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int h, m, s;
	cin >> h >> m >> s;

	int d;
	cin >> d;

	h += d / 3600;
	d %= 3600;

	m += d / 60;
	d %= 60;

	s += d;

	while (s >= 60)
	{
		m++;
		s -= 60;
	}
	
	while (m >= 60)
	{
		h++;
		m -= 60;
	}

	while (h >= 24)
		h -= 24;
	

	cout << h << " " << m << " " << s << "\n";
	return 0;
}