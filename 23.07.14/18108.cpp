#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int b_year, k_year;
	cin >> b_year;

	k_year = b_year - 543;

	cout << k_year << "\n";

	return 0;
}