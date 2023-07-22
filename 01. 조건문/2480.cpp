#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int dice_arr[7] = { 0, };

	for (int i = 0; i < 3; i++)
	{
		int input;
		cin >> input;
		dice_arr[input]++;
	}

	if (*max_element(dice_arr, dice_arr + 7) == 3)
		cout << 10000 + ((max_element(dice_arr, dice_arr + 7) - dice_arr) * 1000) << "\n";

	else if (*max_element(dice_arr, dice_arr + 7) == 2)
		cout << 1000 + ((max_element(dice_arr, dice_arr + 7) - dice_arr) * 100) << "\n";

	else
	{
		int max_index = 0;
		for (int i = 6; i >= 1; i--)
		{
			if (dice_arr[i] == 1)
			{
				max_index = i;
				break;
			}
		}

		cout << max_index * 100 << "\n";
	}


	return 0;
}