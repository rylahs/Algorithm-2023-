#include <bits/stdc++.h>
using namespace std;

// 문제 1
// N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을
// 반환하는 함수 func1(int N)을 작성하라. N은 10만 이하의 자연수이다.

int func1(int N) {
	int sum = 0;
	// 가장 쉬운 방법 O(N)
	for (int i = 1; i <= N; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}

	return sum;
}

int func1_sol(int N) {
	int ret = 0;
	for (int i = 1; i <= N; i++) {
		if (i % 3 == 0 || i % 5 == 0) ret += i;
	}
	return ret;
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int pro1 = 16;
	int pro2 = 34567;
	int pro3 = 27639;

	cout << "func1(16)=" << func1(pro1) << ",\n";
	cout << "func1(34567)=" << func1(pro2) << ",\n";
	cout << "func1(27639)=" << func1(pro3) << "\n";

	

	return 0;
}
