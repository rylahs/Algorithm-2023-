#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;

	unordered_map<string, int> pokemon_name;
	unordered_map<int, string> pokemon_number;

	for (int i = 1; i <= n; i++)
	{
		string input;
		cin >> input;
		pokemon_name.emplace( input, i );
		pokemon_number.emplace( i, input);
	}

	for (int i = 0; i < m; i++)
	{
		string search;
		cin >> search;

		int number_search;

		if (search[0] >= '0' && search[0] <= '9')
		{
			number_search = stoi(search);

			cout << pokemon_number.find(number_search)->second << "\n";
			continue;
		}
		else
		{
			cout << pokemon_name.find(search)->second << "\n";
			continue;
		}
	}


	return 0;
}