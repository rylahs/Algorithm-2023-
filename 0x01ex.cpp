#include <bits/stdc++.h>
using namespace std;

// 0x01. ���� �ڵ� �ۼ� ���
// �ð� ���⵵ ����

int func1(int arr[], int n) // 1 + 1 + N * (2 + 2 + 1) + 1 = 5N + 3
{
	int cnt = 0; // 1��
	for (int i = 0; i < n; i++) // i �ʱ�ȭ 1��, N�� ����
								// i Ȯ��, i���� : 2��
	{
		if (arr[i] % 5 == 0) // ������ ���, ��ġ Ȯ�� : 2��
			cnt++; // 1��
	}
	return cnt; // ��ȯ 1��
}

