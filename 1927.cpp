#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	priority_queue<int, vector<int>, greater<>> pq;


	int n;
	cin >> n;
	while (n--)
	{
		int input;
		cin >> input;
		if (pq.empty() && input == 0)
		{
			cout << input << "\n";
			continue;
		}
		else if (!pq.empty() && input == 0)
		{
			cout << pq.top() << "\n";
			pq.pop();
		}
		else if (input != 0)
		{
			pq.push(input);
			continue;
		}
	}
	return 0;
}