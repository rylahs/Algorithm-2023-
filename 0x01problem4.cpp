#include <bits/stdc++.h>
using namespace std;


// ���� 4
// N ������ �� �߿��� ���� ū 2�� �ŵ��������� ��ȯ�ϴ� �Լ� func4(int N)�� �ۼ��϶� 
// N�� 10�� ������ �ڿ����̴�.

// func4(5) = 4,
// func4(97615282) = 67108864,
// func4(1024) = 1024

int func4(int N) {
	int val = 1;
	while (2 * val <= N)
		val *= 2;
	return val;
}

int func4_myans(int N) {
	int cnt = 0;
	while (N > 1)
	{
		N /= 2;
		cnt++;
	}
	
	int res = 1;
	for (int i = 1; i <= cnt; i++)
		res *= 2;

	return res;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N1 = 5;
	int N2 = 97615282;
	int N3 = 1024;

	cout << func4(N1) << "\n";
	cout << func4(N2) << "\n";
	cout << func4(N3) << "\n";


	return 0;

}