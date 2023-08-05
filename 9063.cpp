#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	vector<int> x;
	vector<int> y;
	for (int i = 0; i < n; i++)
	{
		int x_input, y_input;
		cin >> x_input >> y_input;
		x.push_back(x_input);
		y.push_back(y_input);
	}

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	int min_x = x[0];
	int min_y = y[0];
	
	int max_x = x[n - 1];
	int max_y = y[n - 1];

	int width = max_x - min_x;
	int height = max_y - min_y;

	int area = width * height;

	cout << area << "\n";

	return 0;
}