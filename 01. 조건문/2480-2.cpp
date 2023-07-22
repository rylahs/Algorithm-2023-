#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int diceA, diceB, diceC;
	cin >> diceA >> diceB >> diceC;

	int maxV = max(diceA, diceB);
	maxV = max(maxV, diceC);

	int money = 0;

	if ((diceA == diceB) && (diceB == diceC))
		money = 10000 + (diceA * 1000);
	else if ((diceA == diceB) || (diceA == diceC))
		money = 1000 + (diceA * 100);
	else if (diceB == diceC)
		money = 1000 + (diceB * 100);
	else
		money = maxV * 100;

	cout << money << "\n";
	return 0;
}