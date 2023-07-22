#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	int b_cpy = b;
	while (b_cpy > 0)
	{
		int c = b_cpy % 10;
		cout << a * c << "\n";

		b_cpy /= 10;
	}

	cout << a * b << "\n";


	return 0;
}