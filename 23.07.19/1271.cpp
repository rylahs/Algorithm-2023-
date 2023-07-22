#include <iostream>
#include <cstring>

// strcpy - ���ڿ� ����
// strlen - ���ڿ� ����

char* max(char* a, char* b) {
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] < b[i]) // b�� �� ũ��
			return b; // b��
		if (a[i] > b[i]) // a�� �� ũ��
			return a; // a ����
	}
	return a; // ������ a ���� (�� ���� ���� ���)
}

void subtract(char* a, char* b) { // ���ڿ� ���� ���ڸ� ���� ���
	for (int i = 0; i < strlen(b); i++) { // b ���̸�ŭ ������
		a[i] = a[i] - b[i] + '0'; // a���� b�� ���� (�ƽ�Ű�ڵ���)
		if (a[i] < '0') { // ���� �ƽ�Ű�ڵ尡 48('0')���� ������
			a[i] += 10; // 10�� ���Ѵ�
			a[i - 1]--; // �׸��� ���ڸ� ���� 1 ���δ�
		}
	}
	for (int i = strlen(b) - 1; i >= 0; i--) { // �̹��� �ݴ��
		if (a[i] < '0') { // ���� �ƽ�Ű�ڵ尡 48('0')���� ������
			a[i] += 10; // 10�� ���Ѵ�
			a[i - 1]--; // ���ڸ� ���� 1 ���δ�
		}
	}
}

// ���� - �������� ������ ����! �� �� ���� ������ ��� ����. �׷��� ��� �������� ���´�!
void devidesubtract(char* a, char* b, char* r, int index) { // �������� ǥ���� ������
	r[index] = '0'; // ������� index��ġ�� 0����

	while (a[index - 1] > '0' || max(a + index, b) == a + index) { // a[index-1]�� 0���� ũ�ų�, a�� index��°���Ϳ� b�� �������� a�� index��°���Ͱ� �� Ŭ ���
		subtract(a + index, b); // a�� index��°���� b�� ���� (�������� a�� ���� �ȴ�.)
		++r[index]; // r[index]�� 1 �����ش�
	}
}

void devide(char* a, char* b, char* r) {
	int index = 0;
	int digit = strlen(a) - strlen(b); // �ڸ����� �ƹ��� Ŀ�� (a���� - b����)�� ǥ�� ����

	while (index <= digit) // index�� digit���� �۰ų� ������
		devidesubtract(a, b, r, index++); // devidesubtract ������ - index++�̹Ƿ� devidesubtract�� ���ư� ���� index�� �� ä�� ���ư�

	r[index] = '\0'; // ������ �ڸ��� \0�ٿ��� �� �˸���
}

int main() {
	// �迭�����
	char a[1001];
	char b[1001];
	char r[1001]; // ��
	int ri = 0, ai = 0; // ri�� ai�� �Ǿտ� 0�� ���� ��츦 ��������
	std::cin >> a >> b; // a�� b�� �̿��� �� ���� �޴´�
	devide(a, b, r); // a,b,r ������ ����

	while (r[ri] == '0')
		ri++; // r[ri]��°�� 0�� �ȿö����� ri ������Ŵ
	while (a[ai] == '0')
		ai++; // a[ai]��°�� 0�� �ȿö����� ai ������Ŵ

	if (r[0] == '\0') { // ���� �ȳ�������, devide �Լ����� �� �������� �� r[index] = '\0'�� ���� �ȴ�. �� ��� ���� 0���� �Ѵ�.
		r[0] = '0';
		r[1] = '\0';
	}

	if (a[ai] == '\0') // ���� ������ ���� ���� �� ������ 0�� ���ƹ�����, ai�� a[ai]=='\0'�� ��ġ���� ���߰� �ȴ�. �̶��� ai�� 1 ����� �Ѵ�.
		ai--;

	if (r[ri] == '\0') // ���� r�� 0�� ����ִٸ� ri�� 1�ϰ��̴�. �� ���·� �׳� ����ϸ� ������ ��µǹǷ�, ri�� --���ش�.
		ri--;

	std::cout << r + ri << std::endl; // r + ri ���� ������ ��� - �������ּ��ӿ� ����!!
	std::cout << a + ai << std::endl; // a + ai ���� ������ ��� - �������ּ��ӿ� ����!!
	return 0;
}