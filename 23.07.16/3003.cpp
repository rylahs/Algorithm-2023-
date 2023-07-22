#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	vector<int> correct;
	vector<int> white;

	correct.emplace_back(1);
	correct.emplace_back(1);
	correct.emplace_back(2);
	correct.emplace_back(2);
	correct.emplace_back(2);
	correct.emplace_back(8);

	for (int i = 0; i < 6; i++)
	{
		int input;
		cin >> input;
		white.emplace_back(input);
	}

	for (vector<int>::size_type i = 0; i < white.size(); i++)
	{
		cout << correct[i] - white[i] << " ";
	}



	return 0;
}