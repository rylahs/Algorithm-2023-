#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	pair<int, int> t1 = { 10, 13 };
	pair<int, int> t2 = make_pair(4, 6);
	cout << t2.first << t2.second << "\n";

	if (t2 < t1)
		cout << "t2 < t1\n";


	return 0;
}