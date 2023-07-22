#include <iostream>
using namespace std;

// 주어진 4칸짜리 배열에서 최댓값을 반환해라.

// 잘못된 예시
int solved1(int arr[]) {
	if (arr[0] > arr[1] && arr[0] > arr[2] && arr[0] > arr[3])
		return arr[0];
	if (arr[1] > arr[0] && arr[1] > arr[2] && arr[1] > arr[3])
		return arr[1];
	if (arr[2] > arr[0] && arr[2] > arr[1] && arr[2] > arr[3])
		return arr[2];
	return arr[3];
}
int solved2(int arr[]) {
	if (arr[0] >= arr[1] && arr[0] >= arr[2] && arr[0] >= arr[3])
		return arr[0];
	if (arr[1] >= arr[0] && arr[1] >= arr[2] && arr[1] >= arr[3])
		return arr[1];
	if (arr[2] >= arr[0] && arr[2] >= arr[1] && arr[2] >= arr[3])
		return arr[2];
	return arr[3];
}

int solved3(int arr[]) {
	int mx = arr[0];

	for (int i = 1; i <= 3; i++) {
		if (arr[i] > mx)
			mx = arr[i];
	}

	return mx;
}

int solved4(int arr[]) {
	return *max_element(arr, arr + 4);
}

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int array_test[4];
	for (int i = 0; i < 4; i++)
		cin >> array_test[i];

	int solved1_value = solved1(array_test);
	int solved2_value = solved2(array_test);
	int solved3_value = solved3(array_test);
	int solved4_value = solved4(array_test);

	cout << "Solved 1 : " << solved1_value << "\n";
	cout << "Solved 2 : " << solved2_value << "\n";
	cout << "Solved 3 : " << solved3_value << "\n";
	cout << "Solved 4 : " << solved4_value << "\n";



	return 0;
}