#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b; // 1 <= a , b <= 10000

	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";
	cout << a % b << "\n";

	return 0;
}