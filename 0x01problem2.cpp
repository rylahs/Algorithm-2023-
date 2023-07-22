#include <bits/stdc++.h>
using namespace std;

// ���� 2
// �־��� ���� N�� int �迭 arr���� ���� 100�� 
// ���� �ٸ� ��ġ�� �� ���Ұ� �����ϸ� 1��, �������� ������ 0�� ��ȯ�ϴ� �Լ� 
// func2(int arr[], int N)�� �ۼ��϶�
// arr�� �� ���� 0 �̻� 100 �����̰� N�� 1000�����̴�.

// func2({1, 52, 48}, 3) = 1,
// func2({50, 42}, 2) = 0,
// func2({4, 13, 63, 87}, 4) = 1

int func2(int arr[], int N) {
	int test_arr[102] = { 0, };
	
	for (int i = 0; i < N; i++)
		test_arr[arr[i]] += 1;
	
	for (int i = 0; i < N; i++)
	{
		if (test_arr[arr[i]] > 1)
			return 1;

		else if (test_arr[50] == 1)
			continue;

		else
		{
			if (test_arr[100 - arr[i]] == 1)
				return 1;
		}

	}

	return 0;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int prob_arr1[3] = { 1, 52, 48 };
	int prob_arr2[2] = { 42, 50 };
	int prob_arr3[4] = { 4, 13, 63, 87 };

	int N1 = 3; 
	int N2 = 2; 
	int N3 = 4;

	int res1 = func2(prob_arr1, N1);
	int res2 = func2(prob_arr2, N2);
	int res3 = func2(prob_arr3, N3);

	cout << res1 << "\n";
	cout << res2 << "\n";
	cout << res3 << "\n";

	return 0;
}