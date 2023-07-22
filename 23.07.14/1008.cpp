#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	double a, b;
	double res;
	cin >> a >> b;

	res = a / b;
	cout << fixed;
	cout.precision(12);
	cout << res << "\n";
	return 0;
}