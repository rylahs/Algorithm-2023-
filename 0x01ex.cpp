#include <bits/stdc++.h>
using namespace std;

// 0x01. 기초 코드 작성 요령
// 시간 복잡도 개념

int func1(int arr[], int n) // 1 + 1 + N * (2 + 2 + 1) + 1 = 5N + 3
{
	int cnt = 0; // 1번
	for (int i = 0; i < n; i++) // i 초기화 1번, N번 연산
								// i 확인, i증가 : 2번
	{
		if (arr[i] % 5 == 0) // 나머지 계산, 일치 확인 : 2번
			cnt++; // 1번
	}
	return cnt; // 반환 1번
}

